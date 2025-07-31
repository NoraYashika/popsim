#pragma once

#include <cmath>
#include <iostream>

#include <QtCore/QDate>

#include "../extern/nlohmann/json.hpp"

enum class Month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

struct Date {
    unsigned int d;
    unsigned int m;
    unsigned int y;

    Date operator+(const Date& other) const {return { d + other.d, m + other.m, y + other.y }; }
    Date operator-(const Date& other) const {return { d - other.d, m - other.m, y - other.y }; }
};

inline Date toDate(const QDate& qdate){
    return Date {
        static_cast<unsigned int>(qdate.day()),
        static_cast<unsigned int>(qdate.month()),
        static_cast<unsigned int>(qdate.year())
    };
}

inline QDate toQDate(const Date& date){
    return QDate(static_cast<int>(date.y), static_cast<int>(date.m), static_cast<int>(date.d));
}

struct SimContext {
    int currentTick;
    float deltaTime;
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


// Vectors
// 2 Dimensional
template <typename T = float>
struct Vec2 {
    T x{}, y{};

    Vec2() = default;
    Vec2(T x, T y) : x(x), y(y) {}

    // Basic Ops
    Vec2 operator+(const Vec2& other) const { return {x + other.x, y + other.y}; }
    Vec2 operator-(const Vec2& other) const { return {x - other.x, y - other.y}; }
    Vec2 operator*(T scalar) const { return {x * scalar, y * scalar}; }
    Vec2 operator/(T scalar) const { return {x / scalar, y / scalar}; }

    Vec2& operator+=(const Vec2& other) { x += other.x; y += other.y; return *this; }
    Vec2& operator-=(const Vec2& other) { x -= other.x; y -= other.y; return *this; }

    T length() const { return std::sqrt(x * x + y * y); }

    Vec2 normalized() const {
        T len = length();
        return len > 0 ? *this / len : Vec2{};
    }
};

// JSON Serialization
namespace nlohmann {
    template <typename T>
    struct adl_serializer<Vec2<T>> {
        static void to_json(json& j, const Vec2<T>& v){
            j = json{{"x", v.x}, {"y", v.y}};
        }

        static void from_json(const json& j, Vec2<T>& v){
            j.at("x").get_to(v.x);
            j.at("y").get_to(v.y);
        }
    };
}

// 3 Dimensional
template <typename T = float>
struct Vec3 {
    T x{}, y{}, z{};

    Vec3() = default;
    Vec3(T x, T y, T z) : x(x), y(y), z(z) {}

    Vec3 operator+(const Vec3& o) const { return {x + o.x, y + o.y, z + o.z}; }
    Vec3 operator-(const Vec3& o) const { return {x - o.x, y - o.y, z - o.z}; }
    Vec3 operator*(T s) const { return {x * s, y * s, z * s}; }
    Vec3 operator/(T s) const { return {x / s, y / s, z / s}; }

    Vec3& operator+=(const Vec3& o) { x += o.x; y += o.y; z += o.z; return *this; }
    Vec3& operator-=(const Vec3& o) { x -= o.x; y -= o.y; z -= o.z; return *this; }

    T length() const { return std::sqrt(x * x + y * y + z * z); }

    Vec3 normalized() const {
        T len = length();
        return len > 0 ? *this / len : Vec3{};
    }
};

// JSON serialization
namespace nlohmann {
    template <typename T>
    struct adl_serializer<Vec3<T>> {
        static void to_json(json& j, const Vec3<T>& v) {
            j = json{{"x", v.x}, {"y", v.y}, {"z", v.z}};
        }

        static void from_json(const json& j, Vec3<T>& v) {
            j.at("x").get_to(v.x);
            j.at("y").get_to(v.y);
            j.at("z").get_to(v.z);
        }
    };
}
