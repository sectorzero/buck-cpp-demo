#ifndef TURTLE_H
#define TURTLE_H

namespace langlab {
    class Turtle {
        public: 
            virtual ~Turtle() {}
            virtual void PenUp() = 0;
            virtual void PenDown() = 0;
            virtual void Forward(int distance) = 0;
            virtual void Turn(int degress) = 0;
            virtual int GetX() const = 0;
            virtual int GetY() const = 0;
    };
}

#endif /* TURTLE_H */
