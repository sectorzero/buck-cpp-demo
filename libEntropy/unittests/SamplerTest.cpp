#include "libEntropy/Sampler.h"

#include <gtest/gtest.h>

namespace {

    void operator*(size_t n, std::function<void (size_t)> f) {
        for(size_t i = 0; i < n; ++i) f(i); 
    }

    class SamplerTest : public ::testing::Test {
        protected:
            SamplerTest() {}
            virtual ~SamplerTest() {}
            virtual void SetUp() {}
            virtual void TearDown() {}
    };

    TEST_F(SamplerTest, BasicMethodDoesStuff) {
        size_t samples{1000};
        uint16_t selected{0};

        langlab::Sampler s(0.5);
        samples * [&](size_t i) { if(s.select())  ++selected; };

        EXPECT_LT(400, selected);
    }

    int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }

}
