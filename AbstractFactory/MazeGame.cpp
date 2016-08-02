//
// Created by boris on 02.08.16.
//

#include "MazeGame.h"

Maze *MazeGame::CreateMaze(MazeFactory &factory) {
    Maze* myMaze = factory.makeMaze();
    Room* room1 = factory.makeRoom(0);
    Room* room2 = factory.makeRoom(1);
    Door* myDoor = factory.makeDoor(room1, room2);

    myMaze->AddRoom(room1);
    myMaze->AddRoom(room2);

    room1->SetSide(North, factory.makeWall());
    room1->SetSide(South, factory.makeWall());
    room1->SetSide(East, factory.makeWall());
    room1->SetSide(West, myDoor);

    room2->SetSide(North, factory.makeWall());
    room2->SetSide(South, factory.makeWall());
    room2->SetSide(East, myDoor);
    room2->SetSide(West, factory.makeWall());

    return myMaze;
}
