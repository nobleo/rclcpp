
#include "rclcpp/executable_list.hpp"

using rclcpp::executor::ExecutableList;

ExecutableList::ExecutableList()
:
  number_of_subscription(0),
  number_of_timer(0),
  number_of_service(0),
  number_of_client(0),
  number_of_waitable(0)
  {}

ExecutableList::~ExecutableList()
{}
