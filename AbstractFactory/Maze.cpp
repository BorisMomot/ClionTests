//
// Created by boris on 02.08.16.
//

#include "Maze.h"

Room::Room(int roomNumber) {
    if (roomNumber >= 0){
        _roomNumber = roomNumber;
    }
    else {
        _roomNumber = 0;
    }
}

MapSquare *Room::GetSideObj(Direction side) const {
    return _sides[side];
}

void Room::SetSide(Direction side, MapSquare *obj) {
    _sides[side] = obj;
}

void Room::Enter() {

}

Wall::Wall() {}

void Wall::Enter() {}

Door::Door(Room *r1, Room *r2) {
    _room1 = r1;
    _room2 = r2;
    _isOpen = true;
}

void Door::Enter() {}

Room *Door::OtherSideFrom(Room *room) {
    if (room == _room1) {
        return _room2;
    }
    else if (room == _room2) {
        return _room1;
    }
    else {
        return nullptr;
    }
}

Maze::Maze() {}

void Maze::AddRoom(Room *room) {
    _roomsVector.push_back(room);
}

Room *Maze::GetRoom(int roomNumber) const {
    if (roomNumber <= (_roomsVector.size()-1)){
        return _roomsVector[roomNumber];
    }
    else {
        return nullptr;
    }
}
