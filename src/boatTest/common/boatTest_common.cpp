#include "boatTest_common.h"

BoatTest::BoatTest() { name = "NONESPECIFIED"; }
BoatTest::BoatTest(std::string id, testType test_type, std::vector<std::string> test_data)
{
    name = id;
    type = test_type;
    data = test_data;
}

std::string              BoatTest::getName(BoatTest * test) { return test->name; }
testType                 BoatTest::getTestType(BoatTest * test) { return test->type; }
std::vector<std::string> BoatTest::getTestData(BoatTest * test) { return test->data; }
