#pragma once

struct Date {
    unsigned int d;
    unsigned int m;
    unsigned int y;
};

// Numeric Intervals
template<typename T>
struct Interval {
    T min;
    T max;

    Interval() = default;
    Interval(T minVal, T maxVal) : min(minVal), max(maxVal) {}

    bool contains(T val) const {
        return val >= min && val <= max;
    }

    T range() const {
        return max - min;
    }
};