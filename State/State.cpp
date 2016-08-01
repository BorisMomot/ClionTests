//
// Created by boris on 27.07.16.
//

//#include <bits/shared_ptr.h>
#include <memory>
#include <iostream>
#include "State.h"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCDFAInspection"
using namespace std;

AbstractState::~AbstractState() {}

AbstractState::AbstractState(SomeObject* obj) {
    _obj = obj;
}

void AbstractState::Calculate() {}

void AbstractState::ChangeState(SomeObject* Object, AbstractState* newState) {
    Object->ChangeState(newState);
}
//----------------------------------------------------------------------------------------------------------------------
int SomeObject::getSomeint() const {
    return someint;
}

void SomeObject::setSomeint(int someint) {
    SomeObject::someint = someint;
}

float SomeObject::getSomefloat() const {
    return somefloat;
}

void SomeObject::setSomefloat(float somefloat) {
    SomeObject::somefloat = somefloat;
}

void SomeObject::ChangeState(AbstractState* newState) {
    _currentState = newState;
}


SomeObject::~SomeObject() {}

SomeObject::SomeObject() {
    _currentState = new State1(this);
}

void SomeObject::CalculateState() {
    _currentState->Calculate();
}

void SomeObject::SetState(int stateNumber) {
    AbstractState* tempState = _currentState;
    switch (stateNumber) {
        case 1:
            cout<<"Переводим SomeObject в состояние 1"<<endl;
            _currentState->ChangeState(this, new State1(this));
            break;
        case 2:
            cout<<"Переводим SomeObject в состояние 2"<<endl;
            _currentState->ChangeState(this, new State2(this));
            break;
        case 3:
            cout<<"Переводим SomeObject в состояние 3"<<endl;
            _currentState->ChangeState(this, new State3(this));
            break;
        default:
            cout<<"Переводим SomeObject в состояние 1"<<endl;
            _currentState->ChangeState(this, new State1(this));
            break;
        }
    delete tempState;
}
//----------------------------------------------------------------------------------------------------------------------
void State1::Calculate() {
    cout<<"State1, Calculate function"<<endl;
    _obj->setSomefloat(1);
    _obj->setSomeint(1);
}
State1::State1(SomeObject *obj) : AbstractState(obj) {}
//----------------------------------------------------------------------------------------------------------------------
void State2::Calculate() {
    cout<<"State2, Calculate function"<<endl;
    _obj->setSomefloat(2);
    _obj->setSomeint(2);
}
State2::State2(SomeObject *obj) : AbstractState(obj) {}
//----------------------------------------------------------------------------------------------------------------------
void State3::Calculate() {
    cout<<"State3, Calculate function"<<endl;
    _obj->setSomefloat(3);
    _obj->setSomeint(3);
}
State3::State3(SomeObject *obj) : AbstractState(obj) {}
#pragma clang diagnostic pop