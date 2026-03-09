from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launches import generate_rsp_launch


def generate_launch_description():
    moveit_config = MoveItConfigsBuilder("aubo_i5H", package_name="aubo_description1").to_moveit_configs()
    return generate_rsp_launch(moveit_config)
