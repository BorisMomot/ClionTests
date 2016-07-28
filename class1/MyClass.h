//
// Created by boris on 19.07.16.
//

#ifndef LEARNINGTEST_MYCLASS_H
#define LEARNINGTEST_MYCLASS_H


class MyClass {
public:
    MyClass();
    virtual ~MyClass() { }

    int returnFourFunction();
    static int SumTwoValues(const int x, const int y);
    static double MuxTwoValues(const int x, const int y);
};


#endif //LEARNINGTEST_MYCLASS_H
