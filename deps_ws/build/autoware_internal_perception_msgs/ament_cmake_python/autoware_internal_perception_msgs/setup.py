from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_internal_perception_msgs',
    version='1.12.1',
    packages=find_packages(
        include=('autoware_internal_perception_msgs', 'autoware_internal_perception_msgs.*')),
)
