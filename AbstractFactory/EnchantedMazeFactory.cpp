//
// Created by boris on 02.08.16.
//

#include "EnchantedMazeFactory.h"

EnchantedMazeFactory::EnchantedMazeFactory() {}

Room *EnchantedMazeFactory::makeRoom(int i) const {
    return MazeFactory::makeRoom(i);
}

Door *EnchantedMazeFactory::makeDoor(Room *room, Room *room1) const {
    return MazeFactory::makeDoor(room, room1);
}
