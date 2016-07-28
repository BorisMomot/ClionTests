//
// Created by boris on 19.07.16.
//

#include "Test1.h"

Test1::Test1() {

}

Test1::~Test1() {

}

void Test1::SetUp() {
    Test::SetUp();
    std::cout<<"SetUp!!!"<<std::endl;
}

void Test1::TearDown() {
    Test::TearDown();
    std::cout<<"TearDown!!!"<<std::endl;
}

TEST_F(Test1, test1)
{
    const int x=3;
    const int y=2;
    ASSERT_EQ(MyClass::SumTwoValues(x,y), 5);
    EXPECT_EQ(MyClass::MuxTwoValues(x,y), 6);
    EXPECT_EQ(MyClass::MuxTwoValues(x,y), 7);
}

TEST_F(Test1, test2)
{
    ASSERT_EQ(7, 7);
}




