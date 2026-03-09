from setuptools import find_packages, setup
import os
from glob import glob
package_name = 'aubo_description'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # 安装 urdf 目录下的所有文件
        (os.path.join('share', package_name, 'urdf'), glob('urdf/*')),
         # 安装 meshes/aubo_i5H 目录下的所有文件（包括子目录）
         (os.path.join('share', package_name, 'meshes', 'aubo_i5H'), glob('meshes/aubo_i5H/*/*', recursive=True)),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='autumn',
    maintainer_email='autumn@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
