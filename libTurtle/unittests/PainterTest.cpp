#include "libTurtle/Painter.h"
#include "MockTurtle.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace {

    TEST(PainterTest, CanDrawSomething) {
        langlab::MockTurtle turtle;
        EXPECT_CALL(turtle, PenDown()).Times(::testing::AtLeast(1));
        EXPECT_CALL(turtle, PenUp()).Times(::testing::AtLeast(1));

        langlab::Painter painter;

        EXPECT_TRUE(painter.paint(turtle));
    }

    int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }

}
