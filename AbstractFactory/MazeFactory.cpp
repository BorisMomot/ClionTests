//
// Created by boris on 02.08.16.
//

#include "MazeFactory.h"

MazeFactory::MazeFactory() {}

Maze* MazeFactory::makeMaze() const {
    return new Maze();
}

Wall* MazeFactory::makeWall() const {
    return new Wall();
}

Room* MazeFactory::makeRoom(int n) const {
    return new Room(n);
}

Door *MazeFactory::makeDoor(Room *r1, Room *r2) const {
    return new Door(r1, r2);
}


