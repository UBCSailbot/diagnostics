#ifndef BOATTEST_COMMON_H_
#define BOATTEST_COMMON_H_

/* Include Files */
#include <string>
#include <vector>

/* Objects */
using testType = enum {
    ROS,
    CAN,
};

class BoatTest
{
    std::string              name;
    testType                 type;
    std::vector<std::string> data;

public:
    BoatTest();
    BoatTest(std::string id, testType test_type, std::vector<std::string> data);
    static std::string              getName(BoatTest * test);
    static testType                 getTestType(BoatTest * test);
    static std::vector<std::string> getTestData(BoatTest * test);
};

#endif
