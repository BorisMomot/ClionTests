//
// Created by boris on 19.07.16.
//

#ifndef LEARNINGTEST_TEST1_H
#define LEARNINGTEST_TEST1_H

#include <gtest/gtest.h>
#include "../class1/MyClass.h"

class Test1: public ::testing::Test
{

public:
    Test1();
    virtual ~Test1();

protected:
    void SetUp();
    void TearDown();
};

#endif //LEARNINGTEST_TEST1_H
