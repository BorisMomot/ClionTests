cmake_minimum_required(VERSION 3.5)
project(LearningTest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(googletest)
add_subdirectory(class1)
add_subdirectory(tests)
add_subdirectory(State)
add_subdirectory(AbstractFactory)
add_subdirectory(Builder)
add_subdirectory(turtleGMock)

#include_directories(class1)

enable_testing()

set(SOURCE_FILES main.cpp)
add_executable(LearningTest ${SOURCE_FILES})
target_link_libraries(LearningTest STATIC Class1Lib STATIC gtest STATIC statesLib)
target_include_directories(LearningTest PUBLIC Class1Lib PUBLIC statesLib PUBLIC AbstractFactoryLib)