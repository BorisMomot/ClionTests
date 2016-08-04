//
// Created by boris on 04.08.16.
//

#ifndef LEARNINGTEST_MAZEBUILDER_H
#define LEARNINGTEST_MAZEBUILDER_H

#include "Maze.h"

class MazeBuilder {
public:
    virtual void BuildMaze() {}
    virtual void BuildRoom(int roomNumber){}
    virtual void BuildDoor(int roomFrom, int roomTo) {}
    virtual Maze* GetMaze() {return 0;}
protected:
    MazeBuilder() {}
};

#endif //LEARNINGTEST_MAZEBUILDER_H
