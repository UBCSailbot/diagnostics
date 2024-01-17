#ifndef BOATTEST_COMMON_H_
#define BOATTEST_COMMON_H_

/* Include Files */
#include <string>
#include <vector>

/* Objects */
class BoatTest
{
    std::string              name;
    std::vector<std::string> ROS_topics;
    std::vector<std::string> ROS_messages;

public:
    BoatTest();
    BoatTest(std::string name, std::vector<std::string> ROS_topics, std::vector<std::string> ROS_messages);
    std::string              getName();
    std::vector<std::string> getROSTopics();
    std::vector<std::string> getROSMessages();
};

#endif
