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

    inline float sigmoid(float x){
        return 1.0f / (1.0f + std::exp(-x));
    }
};

namespace LinAlg {
    template <typename T>
    float distance(const Vec2<T>& a, const Vec2<T>& b){
        return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    }

    template <typename T>
    float distance_squared(const Vec2<T>& a, const Vec2<T>& b){
        return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    }
}

// Clamp functions
template <typename T>
T clamp(T val, T min_val, T max_val){
    return std::max(min_val, std::min(val, max_val));
}

template <typename T>
T clamp(T val, Interval<T> interval){
    return std::max(interval.min, std::min(val, interval.max));
}

// Linear interpolation
template <typename T>
T lerp(T a, T b, float t){
    return a + (b - a) * t;
}

// Map/Remap Range
template <typename T>
T remap(T value, T in_min, T in_max, T out_min, T out_max){
    T t = (value - in_min) / (in_max - in_min);
    return out_min + t * (out_max - out_min);
}

template <typename T>
T remap(T value, Interval<T> in_interval, Interval<T> out_interval){
    T t = (value - in_interval.min) / (in_interval.max - in_interval.min);
    return out_interval.min + t * (out_interval.max - out_interval.min);
}