from setuptools import find_packages
from setuptools import setup

setup(
    name='armpi_fpv_kinematics',
    version='0.0.1',
    packages=find_packages(
        include=('armpi_fpv_kinematics', 'armpi_fpv_kinematics.*')),
)
