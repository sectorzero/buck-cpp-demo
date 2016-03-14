#include "libTurtle/Turtle.h"

#include "gmock/gmock.h"

namespace langlab {
    class MockTurtle : public Turtle {
        public:
            MOCK_METHOD0(PenUp, void());
            MOCK_METHOD0(PenDown, void());
            MOCK_METHOD1(Forward, void(int distance));
            MOCK_METHOD1(Turn, void(int degrees));
            MOCK_CONST_METHOD0(GetX, int());
            MOCK_CONST_METHOD0(GetY, int());
    };
}
