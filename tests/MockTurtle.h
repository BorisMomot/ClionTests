//
// Created by boris on 24.08.16.
//

#ifndef LEARNINGTEST_MOCKTURTLE_H
#define LEARNINGTEST_MOCKTURTLE_H
#include "turtleGMock/Turtle.h"
#include "gmock/gmock.h"

class MockTurtle: public Turtle {
public:
    MOCK_METHOD0(PenUp, void());
    MOCK_METHOD0(PenDown, void());
    MOCK_METHOD1(Forward, void(int distance));
    MOCK_METHOD1(Turn, void(int degrees));
    MOCK_METHOD2(Goto, void(int x, int y));
    MOCK_CONST_METHOD0(GetX, int());
    MOCK_CONST_METHOD0(GetY, int());
};


#endif //LEARNINGTEST_MOCKTURTLE_H
