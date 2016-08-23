//
// Created by boris on 24.08.16.
//

#include "Painter.h"

Painter::Painter(Turtle &turtle):
        _turtle(turtle)
{
}

bool Painter::DrawCircle(const int x, const int y, const int r) {
    _turtle.PenUp();
    _turtle.Goto(x,y);
    _turtle.PenDown();
    _turtle.Goto(x+r, y+r);
    _turtle.PenUp();

    return true;
}

bool Painter::DrawLine(const int x1, const int y1, const int x2, const int y2) {
    _turtle.PenUp();
    _turtle.Goto(x1,y1);
    _turtle.PenDown();
    _turtle.Goto(x2,y2);
    _turtle.PenUp();

    return true;
}

bool Painter::DrawSquare(const int x1, const int y1, const int x2, const int y2) {
    _turtle.PenUp();
    _turtle.Goto(x1,y1);
    _turtle.PenDown();
    _turtle.Goto(x2,y1);
    _turtle.Goto(x2,y2);
    _turtle.Goto(x1,y2);
    _turtle.Goto(x1,y1);
    _turtle.PenUp();

    return true;
}
