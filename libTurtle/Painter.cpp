#include "libTurtle/Painter.h"

using namespace langlab;

    Painter::~Painter() {}

    bool Painter::paint(Turtle& turtle) {
        turtle.PenUp();
        turtle.PenDown();
        return true;
    }

    bool Painter::move(Turtle& turtle) {
        turtle.Forward(10);
        turtle.Turn(46);
        return true;
    }
