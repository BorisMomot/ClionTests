//
// Created by boris on 24.08.16.
//

#ifndef LEARNINGTEST_TURTLE_H
#define LEARNINGTEST_TURTLE_H


class Turtle {
public:
    virtual ~Turtle();
    virtual void PenUp()=0;
    virtual void PenDown()=0;
    virtual void Forward(int distance)=0;
    virtual void Turn(int degrees)=0;
    virtual void Goto(int x, int y)=0;
    virtual int GetX() const =0;
    virtual int GetY() const =0;
};


#endif //LEARNINGTEST_TURTLE_H
