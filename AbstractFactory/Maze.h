//
// Created by boris on 02.08.16.
//

#ifndef LEARNINGTEST_MAZE_H
#define LEARNINGTEST_MAZE_H

#include <vector>

enum Direction {North, South, East, West};

class MapSquare {
public: virtual void Enter() = 0;
};

class Room: public MapSquare {
public:
    Room(int roomNumber);
    MapSquare* GetSideObj(Direction) const;
    void SetSide(Direction, MapSquare*);

    virtual void Enter() override;

private:
    MapSquare* _sides[4];
    int _roomNumber;
};

class Wall: public MapSquare {
public:
    Wall();

    virtual void Enter() override;
};

class Door: public MapSquare {
public:
    Door(Room* = 0, Room* = 0);

    virtual void Enter() override;
    Room* OtherSideFrom(Room*);

private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};


class Maze {
public:
    Maze();

    void AddRoom(Room*);
    Room* GetRoom(int) const;

private:
    std::vector<Room*> _roomsVector;
};


#endif //LEARNINGTEST_MAZE_H
