//
// Created by boris on 03.08.16.
//

#ifndef LEARNINGTEST_TESTABSTRACTFACTORY_H
#define LEARNINGTEST_TESTABSTRACTFACTORY_H

#include <gtest/gtest.h>
#include <AbstractFactory/MazeFactory.h>
#include <AbstractFactory/MazeGame.h>
#include <AbstractFactory/Maze.h>

class TestAbstractFactory: public testing::Test {
public:
    TestAbstractFactory();

    MazeFactory* _mazeFactory;
    MazeGame* _mazeGame;
    Maze* _maze;

    virtual ~TestAbstractFactory();

protected:
    void SetUp();
    void TearDown();

};


#endif //LEARNINGTEST_TESTABSTRACTFACTORY_H
