#include "boatTest_common.h"

BoatTest::BoatTest() { name = "NONESPECIFIED"; }
BoatTest::BoatTest(std::string id, std::vector<std::string> topics, std::vector<std::string> messages)
{
    name         = id;
    ROS_topics   = topics;
    ROS_messages = messages;
}

std::string              BoatTest::getName() { return name; }
std::vector<std::string> BoatTest::getROSTopics() { return ROS_topics; }
std::vector<std::string> BoatTest::getROSMessages() { return ROS_messages; }
