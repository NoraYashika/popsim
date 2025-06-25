#pragma once

#include <cmath>
#include <optional>

#include "types.hpp"

namespace Functions{
    namespace Distribution {
        template<typename T>
        double binomial(const Interval<T>& interval, T x){
            if (interval.range() == 0) return 1.0;

            double mean = (interval.min + interval.max) / 2.0;
            double stddev = interval.range() / 6.0; // 99.7% within ±3σ
            
            double exponent = -std::pow((x - mean) / stddev, 2.0) / 2.0;
            double result = std::exp(exponent);

            return result;
        }

        template<typename T>
        std::optional<std::pair<double, double>> binomial_inverse(const Interval<T>& interval, double y){
            if (y <= 0.0 || y > 1.0 || interval.range() == 0)
                return std::nullopt;
            
            double mean = (interval.min + interval.max) / 2.0;
            double stddev = interval.range() / 6.0;
            
            double ln_y = std::log(y);
            double inner = -2.0 * stddev * stddev * ln_y;

            if (inner < 0.0) return std::nullopt; // invalid output
        
            double delta = std::sqrt(inner);
            return std::make_pair(mean - delta, mean + delta);
        }
    };
};