from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'slam_mapping'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
	('share/slam_mapping/launch',['launch/rtabmap_mapping.launch.py']),
        ('share/slam_mapping',['package.xml']),
	('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # LAUNCH FILES
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='zohaib',
    maintainer_email='zohaib@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'slam_node = slam_mapping.slam_node:main',
        ],
    },
)
