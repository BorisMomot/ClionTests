#include <iostream>
#include <memory>
#include <MyClass.h>
#include <gtest/gtest.h>

using namespace std;

int main() {
    auto myClass = std::make_shared<MyClass>();
    cout<<myClass->returnFourFunction()<<endl;
    cout << "Hello, World!" << endl;
    return 0;
}