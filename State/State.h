//
// Created by boris on 27.07.16.
//

#ifndef LEARNINGTEST_STATE_H
#define LEARNINGTEST_STATE_H

//#include <bits/shared_ptr.h>
#include <memory>

class SomeObject;

class AbstractState {
public:
    AbstractState(SomeObject* obj);
    virtual ~AbstractState();
    virtual void Calculate() = 0;
    static void ChangeState(SomeObject* Object, AbstractState* newState);

protected:
    SomeObject* _obj;
private:
};


//----------------------------------------------------------------------------------------------------------------------
class State1: public AbstractState {
public:
    State1(SomeObject* obj);
    virtual void Calculate () override;
private:
//    static State1* _instance;
};
//----------------------------------------------------------------------------------------------------------------------
class State2: public AbstractState {
public:
    State2(SomeObject* obj);
    virtual void Calculate () override;
private:
//    static State2* _instance;
};
//----------------------------------------------------------------------------------------------------------------------
class State3: public AbstractState {
public:
    State3(SomeObject* obj);
    virtual void Calculate () override;
private:
//    static State3* _instance;
};
//----------------------------------------------------------------------------------------------------------------------



class SomeObject {
public:
//    SomeObject(AbstractState* _currentState);

    SomeObject();
    virtual ~SomeObject();

    void CalculateState();
    void SetState(int stateNumber);

    float getSomefloat() const;
    void setSomefloat(float somefloat);
    int getSomeint() const;
    void setSomeint(int someint);

private:
    int someint={0};
    bool somebool={false};
    float somefloat={0};
    AbstractState* _currentState;

    friend class AbstractState;
    void ChangeState(AbstractState* newState);
};

#endif //LEARNINGTEST_STATE_H
