//
// Created by boris on 03.08.16.
//

#include "TestAbstractFactory.h"

using namespace std;

TestAbstractFactory::~TestAbstractFactory() {
    delete(_mazeFactory);
    delete(_mazeGame);
    delete(_maze);
}

TestAbstractFactory::TestAbstractFactory() {
    cout<<"Start TestAbstractFactory constructor"<<endl;
    _mazeGame = new MazeGame();
    _mazeFactory = new MazeFactory();
    _maze = _mazeGame->CreateMaze(*_mazeFactory);
}

void TestAbstractFactory::SetUp() {
    Test::SetUp();
    cout<<"TestAbstractFactory SetUp!"<<endl;
}

void TestAbstractFactory::TearDown() {
    Test::TearDown();
    cout<<"TestAbstractFactory TearDown!"<<endl;
}

TEST_F(TestAbstractFactory, test1){
    EXPECT_NE(_maze->GetRoom(1), _maze->GetRoom(2));
    EXPECT_EQ(_maze->GetRoom(1), _maze->GetRoom(1));
}