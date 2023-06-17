#include "rclcpp/rclcpp.hpp"
int main(int argc, char ** argv)
{
    //初始化rclcpp
    rclcpp::init(argc,argv);
    //产生一个node_01节点
    auto node = std::make_shared<rclcpp::Node>("node_01");
    //打印一句ROS_INFO  
    RCLCPP_INFO(node->get_logger(),"node_01 has started");
    //运行节点，等待ctrl+c退出
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}