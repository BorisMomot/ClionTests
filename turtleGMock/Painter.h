//
// Created by boris on 24.08.16.
//

#ifndef LEARNINGTEST_PAINTER_H
#define LEARNINGTEST_PAINTER_H

#include "Turtle.h"

class Painter {
public:
    Painter(Turtle &turtle);
    bool DrawCircle(const int x, const int y, const int r);
    bool DrawLine(const int x1, const int y1, const int x2, const int y2);
    bool DrawSquare(const int x1, const int y1, const int x2, const int y2);

private:
    Painter() = delete;
    Turtle &_turtle;
};


#endif //LEARNINGTEST_PAINTER_H
