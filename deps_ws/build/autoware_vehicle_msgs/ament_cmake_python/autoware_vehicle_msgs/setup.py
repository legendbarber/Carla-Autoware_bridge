from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_vehicle_msgs',
    version='1.11.0',
    packages=find_packages(
        include=('autoware_vehicle_msgs', 'autoware_vehicle_msgs.*')),
)
