//
// Created by boris on 02.08.16.
//

#ifndef LEARNINGTEST_MAZEGAME_H
#define LEARNINGTEST_MAZEGAME_H

#include "Maze.h"
#include "MazeFactory.h"

class MazeGame {
public:
    MazeGame(){};
    Maze* CreateMaze(MazeFactory& );

private:
    Maze* _Maze;
};


#endif //LEARNINGTEST_MAZEGAME_H
