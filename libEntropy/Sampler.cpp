#include "Sampler.h"
#include "RandomUtil.h"
#include <cassert>

using namespace std;

langlab::Sampler::Sampler(double probability) : 
    probability(probability),
    random(langlab::RandomUtil::sampler_probability()) {
        assert(probability >= 0.0 && probability <= 1.0);
    }

langlab::Sampler::~Sampler() {}

bool langlab::Sampler::select() {
    return random() < probability;
}
