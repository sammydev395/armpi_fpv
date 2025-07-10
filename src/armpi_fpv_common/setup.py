#!/usr/bin/env python3
from setuptools import setup
import os
from glob import glob

package_name = 'armpi_fpv_common'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    package_dir={'': 'src'},
    install_requires=['setuptools', 'rclpy', 'std_msgs', 'sensor_msgs'],
    zip_safe=True,
    maintainer='TODO',
    maintainer_email='TODO@email.com',
    description='armpi_fpv_common',
    license='BSD',
)

