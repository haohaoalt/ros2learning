#include "rclcpp/rclcpp.hpp"
class Node03 : public rclcpp::Node{
    public:
    //构造函数
    Node03(std::string name):Node(name)
    {
        RCLCPP_INFO(this->get_logger(),"大家好，我是%s",name.c_str());
    }
    private:
};
int main(int argc, char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Node03>("node_03");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}