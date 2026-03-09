from setuptools import find_packages
from setuptools import setup

setup(
    name='aubo_ros2_common',
    version='1.0.0',
    packages=find_packages(
        include=('aubo_ros2_common', 'aubo_ros2_common.*')),
)
