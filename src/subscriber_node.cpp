#include <memory>
#include <functional>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using std::placeholders::_1;

/*
 * TODO: Create a Class named 'SubscriberNode' that inherits from rclcpp::Node.
 * Requirements:
 * 1. The constructor should name the node "subscriber_node".
 * 2. Create a subscription to topic "/chatter" with message type std_msgs::msg::String.
 * 3. The subscription callback should:
 *    - Log using RCLCPP_INFO: "I heard: 'MESSAGE'" where MESSAGE is the received data
 */

class SubscriberNode : public rclcpp::Node
{
public:
    SubscriberNode()
        : Node("subscriber_node")
    {
        // TODO: Create the subscription here
    }

private:
    // TODO: Define the topic_callback function here

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SubscriberNode>());
    rclcpp::shutdown();
    return 0;
}
