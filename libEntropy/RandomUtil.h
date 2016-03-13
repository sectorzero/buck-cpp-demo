#include<functional>

namespace langlab {

    class RandomUtil {
        public : 
            static std::function<double()> sampler_double(double lowRange, double highRange);
            static std::function<double()> sampler_probability();
    };

}
