project(AbstracFactory)

set(ABSTRACT_FACTORY_SOURCE MazeFactory.cpp MazeFactory.h EnchantedMazeFactory.cpp EnchantedMazeFactory.h Maze.cpp Maze.h MazeGame.cpp MazeGame.h)

add_library(AbstractFactoryLib STATIC ${ABSTRACT_FACTORY_SOURCE})