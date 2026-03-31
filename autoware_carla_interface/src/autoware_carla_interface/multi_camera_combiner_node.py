#!/usr/bin/env python3

import threading

import cv2
from cv_bridge import CvBridge
import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
from sensor_msgs.msg import Image


class MultiCameraCombiner(Node):
    def __init__(self):
        super().__init__("multi_camera_combiner")

        self.bridge = CvBridge()
        self.lock = threading.Lock()

        # Camera topics in order: Front, Front-Left, Front-Right, Back, Back-Left, Back-Right
        self.camera_names = [
            "CAM_FRONT",
            "CAM_FRONT_LEFT",
            "CAM_FRONT_RIGHT",
            "CAM_BACK",
            "CAM_BACK_LEFT",
            "CAM_BACK_RIGHT",
        ]

        # Store latest images
        self.images = {name: None for name in self.camera_names}
        self.image_timestamps = {name: None for name in self.camera_names}
        self._logged_cameras = set()  # Track which cameras we've logged

        # Resize dimensions for each camera view (16:9 aspect ratio)
        self.resize_width = 480
        self.resize_height = 270

        # Logging flags
        self._logged_missing = False
        self._logged_publishing = False

        # Create subscribers
        self.subs = []
        for cam_name in self.camera_names:
            topic = f"/sensing/camera/{cam_name}/image_raw/compressed"
            sub = self.create_subscription(
                CompressedImage,
                topic,
                lambda msg, name=cam_name: self.image_callback(msg, name),
                10,
            )
            self.subs.append(sub)

        # Publisher for combined image (raw format for compatibility)
        self.pub = self.create_publisher(Image, "/sensing/camera/all_cameras/image_raw", 10)

        # Timer to publish combined image at 10 Hz
        self.timer = self.create_timer(0.1, self.publish_combined_image)

        self.get_logger().info("Multi-camera combiner node started")

    def _blank_image(self):
        """Create a placeholder image for cameras that are not enabled."""
        return np.zeros((self.resize_height, self.resize_width, 3), dtype=np.uint8)

    def _image_or_blank(self, camera_name):
        """Return the latest image for a camera or a blank placeholder."""
        image = self.images[camera_name]
        if image is None:
            return self._blank_image()
        return image

    def image_callback(self, msg, camera_name):
        """Process incoming camera image."""
        try:
            # Decompress image
            np_arr = np.frombuffer(msg.data, np.uint8)
            cv_image = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)

            if cv_image is not None:
                # Resize image
                resized = cv2.resize(cv_image, (self.resize_width, self.resize_height))

                with self.lock:
                    self.images[camera_name] = resized
                    self.image_timestamps[camera_name] = msg.header.stamp
                    # Log first time we receive from each camera
                    if camera_name not in self._logged_cameras:
                        self._logged_cameras.add(camera_name)
                        self.get_logger().info(f"Received first image from {camera_name}")
        except Exception as e:
            self.get_logger().error(f"Error processing {camera_name}: {str(e)}")

    def publish_combined_image(self):
        """Combine all camera images into a grid and publish."""
        with self.lock:
            # Wait until at least one camera is active before publishing placeholders.
            if all(img is None for img in self.images.values()):
                missing = [name for name, img in self.images.items() if img is None]
                if not self._logged_missing:
                    self._logged_missing = True
                    self.get_logger().warn(f"Waiting for images from: {missing}")
                return

            missing = [name for name, img in self.images.items() if img is None]
            if missing and not self._logged_missing:
                self._logged_missing = True
                self.get_logger().warn(
                    f"Publishing combined image with placeholders for: {missing}"
                )

            # Log first time we publish
            if not self._logged_publishing:
                self._logged_publishing = True
                self.get_logger().info("Starting to publish combined multi-camera image.")

            try:
                # Create 2x3 grid (2 rows, 3 columns)
                row1 = np.hstack(
                    [
                        self.add_label(self._image_or_blank("CAM_FRONT_LEFT"), "FL"),
                        self.add_label(self._image_or_blank("CAM_FRONT"), "F"),
                        self.add_label(self._image_or_blank("CAM_FRONT_RIGHT"), "FR"),
                    ]
                )
                row2 = np.hstack(
                    [
                        self.add_label(self._image_or_blank("CAM_BACK_LEFT"), "BL"),
                        self.add_label(self._image_or_blank("CAM_BACK"), "B"),
                        self.add_label(self._image_or_blank("CAM_BACK_RIGHT"), "BR"),
                    ]
                )

                combined = np.vstack([row1, row2])

                # Convert to ROS Image message (raw format)
                msg = self.bridge.cv2_to_imgmsg(combined, encoding="bgr8")
                msg.header.stamp = self.get_clock().now().to_msg()
                msg.header.frame_id = "multi_camera"

                self.pub.publish(msg)

            except Exception as e:
                self.get_logger().error(f"Error combining images: {str(e)}")

    def add_label(self, image, text):
        """Add camera label to image."""
        labeled = image.copy()
        cv2.putText(
            labeled, text, (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1.0, (0, 255, 0), 2, cv2.LINE_AA
        )
        return labeled


def main(args=None):
    rclpy.init(args=args)
    node = MultiCameraCombiner()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
