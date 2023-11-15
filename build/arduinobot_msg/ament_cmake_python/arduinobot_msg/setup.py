from setuptools import find_packages
from setuptools import setup

setup(
    name='arduinobot_msg',
    version='0.0.0',
    packages=find_packages(
        include=('arduinobot_msg', 'arduinobot_msg.*')),
)
