from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  return LaunchDescription([

    Node(
        package="nav_camera",
        parameters=["../../nav_camera/config/camera_publisher.yaml"],
        executable="camera_publisher"
    ),

    Node(
        package="tf2_ros",
        arguments = ["0", "0", "0", "0", "0", "0", "map", "camera_image"],
        executable="static_transform_publisher"
    ),

    Node(
        package="rviz2",
        arguments=["-d../../nav_rviz/camera_view.rviz"],
        executable="rviz2"
    )
  ])