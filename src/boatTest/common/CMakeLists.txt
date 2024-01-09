add_library(boatTest_Common STATIC boatTest_common.cpp boatTest_common.h)
target_include_directories(boatTest_Common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
