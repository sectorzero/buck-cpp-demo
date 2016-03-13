#include "RandomUtil.h"

#include <random>
#include <chrono>

using namespace std;

function<double()> langlab::RandomUtil::sampler_double(double lowRange, double highRange) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generator(seed);
    uniform_real_distribution<double> distribution(lowRange, highRange);
    return bind(distribution, generator);
}

function<double()> langlab::RandomUtil::sampler_probability() {
    return RandomUtil::sampler_double(0.00, 1.00);
}
