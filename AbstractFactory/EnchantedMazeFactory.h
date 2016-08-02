//
// Created by boris on 02.08.16.
//

#ifndef LEARNINGTEST_ENCHANTEDMAZEFACTORY_H
#define LEARNINGTEST_ENCHANTEDMAZEFACTORY_H

#include "Maze.h"
#include "MazeFactory.h"

class EnchantedMazeFactory: public MazeFactory {
public:
    EnchantedMazeFactory();

    virtual Room *makeRoom(int i) const override;

    virtual Door *makeDoor(Room *room, Room *room1) const override;
};


#endif //LEARNINGTEST_ENCHANTEDMAZEFACTORY_H
