//
// Created by boris on 27.07.16.
//

#ifndef LEARNINGTEST_TESTSTATES_H
#define LEARNINGTEST_TESTSTATES_H

#include <State>
#include <gtest/gtest.h>
#include <State/State.h>

class TestStates: public testing::Test {
public:
    TestStates();
    SomeObject object1, object2;

    virtual ~TestStates(){};
protected:
    void SetUp();
    void TearDown();
};


#endif //LEARNINGTEST_TESTSTATES_H
