//
// Created by boris on 02.08.16.
//

#ifndef LEARNINGTEST_MAZEFACTORY_H
#define LEARNINGTEST_MAZEFACTORY_H

#include "Maze.h"

class MazeFactory {
public:
    MazeFactory();
    virtual Maze* makeMaze() const;
    virtual Wall* makeWall() const;
    virtual Room* makeRoom(int) const;
    virtual Door* makeDoor(Room*, Room*) const;
};


#endif //LEARNINGTEST_MAZEFACTORY_H
