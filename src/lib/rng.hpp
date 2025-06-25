#pragma once

#include <random>
#include <sstream>
#include <random>
#include <iomanip>
#include <vector>

#include "encoder/sha256.hpp"
#include "types.hpp"

std::string generateUUIDv4(){
    std::random_device rd;
    std::mt19937_64 gen(rd());
    std::uniform_int_distribution<uint64_t> dist;

    uint64_t part1 = dist(gen);
    uint64_t part2 = dist(gen);

    std::stringstream ss;
    ss << std::hex
       << std::setfill('0')
       << std::setw(8) << ((part1 >> 32) & 0xFFFFFFFF) << "-"
       << std::setw(4) << ((part1 >> 16) & 0xFFFF) << "-"
       << std::setw(4) << (((part1 >> 0) & 0x0FFF) | 0x4000) << "-"
       << std::setw(4) << ((part2 >> 48) & 0x3FFF | 0x8000) << "-"
       << std::setw(12) << (part2 & 0xFFFFFFFF);

    return ss.str();
}

uint64_t uuidToSeed(const std::string& uuid){
    // Simple hash (non-crypto to get 64-bit seed)
    std::vector<uint8_t> hash = rawsha256::sha256(uuid);
    return shaConv::hexToUint64(rawsha256::toHex(hash));
}

class RNG {
    private:
        std::mt19937_64 engine;

    public:
        RNG(uint64_t _seed) : engine(_seed) {}

        int getInt(int _min, int _max){
            std::uniform_int_distribution<int> dist(_min, _max);
            return dist(engine);
        }

        double getDouble(double _min, double _max){
            std::uniform_real_distribution<double> dist(_min, _max);
            return dist(engine);
        }

        bool getBool(){
            std::uniform_int_distribution<int> dist(0, 1);
            if (dist(engine) == 0){
                return false;
            } else {
                return true;
            }
        }

        template<typename T>
        T getInterval(const Interval<T>& interval){
            if constexpr(std::is_integral<T>::value){
                std::uniform_int_distribution<T> dist(interval.min, interval.max);
                return dist(engine);
            } else {
                std::uniform_real_distribution<T> dist(interval.min, interval.max);
                return dist(engine);
            }
        }

        template<typename T>
        int getInterval(Interval<int> interval){
            std::uniform_int_distribution<int> dist(interval.min, interval.max);
            return dist(engine);
        }

        template<typename T>
        double getInterval(Interval<double> interval){
            std::uniform_real_distribution<double> dist(interval.min, interval.max);
            return dist(engine);
        }

        uint64_t getRaw(){
            return engine();
        }
};