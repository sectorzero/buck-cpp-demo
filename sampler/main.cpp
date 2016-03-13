#include "libEntropy/RandomUtil.h"
#include "libEntropy/Sampler.h"
#include <cassert>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
using namespace langlab;

int main(void) {

    auto sampler = RandomUtil::sampler_probability();
    for(int i = 0; i < 10; ++i) {
        cout << sampler() << endl;
    }

    Sampler s(0.3);
    for(int i = 0; i < 10; ++i) {
        cout << s.select() << endl;
    }

}
