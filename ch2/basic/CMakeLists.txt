# cmake_minimum_required(VERSION 3.10)
# project(first_node)

# #include_directories
# include_directories(/opt/ros/humble/include/rclcpp/)
# include_directories(/opt/ros/humble/include/rcl/)
# include_directories(/opt/ros/humble/include/rcutils/)
# include_directories(/opt/ros/humble/include/rcl_yaml_param_parser/)
# include_directories(/opt/ros/humble/include/rosidl_runtime_c/)
# include_directories(/opt/ros/humble/include/rosidl_typesupport_interface/)
# include_directories(/opt/ros/humble/include/rcpputils/)
# include_directories(/opt/ros/humble/include/builtin_interfaces/)
# include_directories(/opt/ros/humble/include/rmw/)
# include_directories(/opt/ros/humble/include/rosidl_runtime_cpp/)
# include_directories(/opt/ros/humble/include/tracetools/)
# include_directories(/opt/ros/humble/include/rcl_interfaces/)
# include_directories(/opt/ros/humble/include/libstatistics_collector/)
# include_directories(/opt/ros/humble/include/statistics_msgs/)

# # link_directories - 向工程添加多个特定的库文件搜索路径，相当于指定g++编译器的-L参数
# link_directories(/opt/ros/humble/lib/)

# # add_executable - 生成first_node可执行文件
# add_executable(first_node first_ros2_node.cpp)

# # target_link_libraries - 为first_node(目标) 添加需要动态链接库，相同于指定g++编译器-l参数
# # 下面的语句代替 -lrclcpp -lrcutils
# target_link_libraries(first_node rclcpp rcutils)

cmake_minimum_required(VERSION 3.22)
project(first_node)

find_package(rclcpp REQUIRED)
add_executable(first_node first_ros2_node.cpp)
target_link_libraries(first_node rclcpp::rclcpp)
