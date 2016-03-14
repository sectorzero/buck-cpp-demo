#include "libTurtle/Turtle.h"

namespace langlab {
    class Painter {
        public: 
            virtual ~Painter(); 
            bool paint(Turtle& turtle);
            bool move(Turtle& turtle);
    };
}

