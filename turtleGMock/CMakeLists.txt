project(Turtle)

set(TURTLE_SOURCE Turtle.cpp Turtle.h Painter.cpp Painter.h)
add_library(turtleLib STATIC ${TURTLE_SOURCE})