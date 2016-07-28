//
// Created by boris on 27.07.16.
//

#ifndef LEARNINGTEST_STATE_H
#define LEARNINGTEST_STATE_H

#include <bits/shared_ptr.h>
#include <memory>

class SomeObject{};

class AbstractState {
public:
    AbstractState(SomeObject* obj);
    virtual ~AbstractState();
    virtual void Calculate() = 0;

protected:
    void ChangeState(std::shared_ptr<SomeObject> Object, std::shared_ptr<AbstractState> newState);
    std::shared_ptr<SomeObject> _obj;
private:
};


//----------------------------------------------------------------------------------------------------------------------
class State1: public AbstractState {
public:
    State1(SomeObject *obj);

    virtual void Calculate () override;
};
//----------------------------------------------------------------------------------------------------------------------
class State2: public AbstractState {
public:
    State2(SomeObject *obj);

    virtual void Calculate () override;
};
//----------------------------------------------------------------------------------------------------------------------
class State3: public AbstractState {
public:
    State3(SomeObject *obj);

    virtual void Calculate () override;
};
//----------------------------------------------------------------------------------------------------------------------



class SomeObject {
public:
    SomeObject(std::shared_ptr<AbstractState> &_currentState);

    SomeObject();
    virtual ~SomeObject();

    void CalculateState();
    void SetState(int stateNumber);

    float getSomefloat() const;
    void setSomefloat(float somefloat);
    bool isSomebool() const;
    void setSomebool(bool somebool);
    int getSomeint() const;
    void setSomeint(int someint);

private:
    int someint;
    bool somebool;
    float somefloat;
    std::shared_ptr<AbstractState> _currentState;

    friend class AbstractState;
    void ChangeState(AbstractState* newState);
};





#endif //LEARNINGTEST_STATE_H
