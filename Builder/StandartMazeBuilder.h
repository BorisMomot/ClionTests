//
// Created by boris on 04.08.16.
//

#ifndef LEARNINGTEST_STANDARTMAZEBUILDER_H
#define LEARNINGTEST_STANDARTMAZEBUILDER_H

#include "MazeBuilder.h"
#include "Maze.h"

class StandartMazeBuilder: public MazeBuilder {
public:
    StandartMazeBuilder();

    virtual void BuildMaze() override;
    virtual void BuildRoom(int roomNumber) override;
    virtual void BuildDoor(int roomFrom, int roomTo) override;
    virtual Maze *GetMaze() override;
private:
    Direction CommonWall(Room* room1, Room* room2);
    Maze* _maze;
};


#endif //LEARNINGTEST_STANDARTMAZEBUILDER_H
