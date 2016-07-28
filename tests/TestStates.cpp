//
// Created by boris on 27.07.16.
//

#include "TestStates.h"

using namespace std;

void TestStates::SetUp() {
    Test::SetUp();
    cout<<"Set UP!"<<endl;
}

void TestStates::TearDown() {
    Test::TearDown();
    cout<<"Tear DOWN!"<<endl;
}

TestStates::TestStates() {
    object1 = SomeObject();
    object2 = SomeObject();
}

//----------------------------------------------------------------------------------------------------------------------
TEST_F(TestStates, test1) {
    object1.CalculateState();
    object2.CalculateState();
    EXPECT_EQ(object1.getSomefloat(), object2.getSomefloat());
    EXPECT_EQ(object1.getSomeint(), object2.getSomeint());
    EXPECT_EQ(object1.getSomefloat(), 1);
    EXPECT_EQ(object1.getSomeint(), 1);
}

TEST_F(TestStates, test2) {
    object2.SetState(2);
    object1.SetState(2);
    object1.CalculateState();
    object2.CalculateState();
    EXPECT_EQ(object1.getSomefloat(), object2.getSomefloat());
    EXPECT_EQ(object1.getSomeint(), object2.getSomeint());
    EXPECT_EQ(object1.getSomefloat(), 2);
    EXPECT_EQ(object1.getSomeint(), 2);
}