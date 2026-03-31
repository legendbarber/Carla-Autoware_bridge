import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/mnt/hdd/autonomy/ws/Carla-autoware_interface/bridge_ws/install/carla_autonomy_bridge'
