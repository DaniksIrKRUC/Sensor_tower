from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  return LaunchDescription([

    Node(
        package="nav_radar",
        parameters=["../../nav_radar/config/point_cloud_publisher.yaml"],
        executable="point_cloud_publisher"
    )
  ])
