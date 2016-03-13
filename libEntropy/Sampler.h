#include <functional>

namespace langlab {

    class Sampler {
        public :
            Sampler(double probability = 1.0);
            ~Sampler();
            bool select();

        private : 
            double probability;
            std::function<double()> random;
    };

}
