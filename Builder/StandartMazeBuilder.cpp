//
// Created by boris on 04.08.16.
//

#include "StandartMazeBuilder.h"

using namespace std;

void StandartMazeBuilder::BuildMaze() {
    _maze = new Maze();
}

void StandartMazeBuilder::BuildRoom(int roomNumber) {
    if (!_maze->IsRoomWithThisNumber(roomNumber)){
        auto room = new Room(roomNumber);
        room->SetSide(North, new Wall);
        room->SetSide(South, new Wall);
        room->SetSide(East, new Wall);
        room->SetSide(West, new Wall);
        _maze->AddRoom(room);
    }
}

void StandartMazeBuilder::BuildDoor(int roomFrom, int roomTo) {
    if (!_maze->IsRoomWithThisNumber(roomFrom)) {
        BuildRoom(roomFrom);
    }
    if (!_maze->IsRoomWithThisNumber(roomTo)) {
        BuildRoom(roomTo);
    }
    auto door = new Door(_maze->GetRoom(roomFrom), _maze->GetRoom(roomTo));
    _maze->GetRoom(roomFrom)->SetSide(CommonWall(_maze->GetRoom(roomFrom), _maze->GetRoom(roomTo)),door);
    _maze->GetRoom(roomTo)->SetSide(CommonWall(_maze->GetRoom(roomTo), _maze->GetRoom(roomFrom)),door);
}

Maze *StandartMazeBuilder::GetMaze() {
    return _maze;
}

StandartMazeBuilder::StandartMazeBuilder() {
    _maze = nullptr;
}

Direction StandartMazeBuilder::CommonWall(Room *room1, Room *room2) {
    if (room1->get_roomNumber() > room2->get_roomNumber()) {
        return North;
    }
    else {
        return South;
    }
}
