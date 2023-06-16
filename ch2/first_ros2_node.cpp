#include "rclcpp/rclcpp.hpp"
int main(int argc, char** argv)
{
    //调用rclcpp的初始化函数
    rclcpp::init(argc,argv);
    //调用rclcpp的循环运行我们创建的first_node节点
    rclcpp::spin(std::make_shared<rclcpp::Node>("first_node"));
    return 0;
}