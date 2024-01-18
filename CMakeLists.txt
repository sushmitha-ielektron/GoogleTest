# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

# Project setup
project(AddTest)

# Enable C++ for the test file
enable_language(CXX)

# Include Google Test
include(GoogleTest)
find_package(GTest REQUIRED)

# Create an executable for the test file
add_executable(test_add test_add.cpp)

# Link against Google Test and the C library
target_link_libraries(test_add PRIVATE GTest::GTest GTest::Main)

# Register the test with CTest
gtest_discover_tests(test_add)
