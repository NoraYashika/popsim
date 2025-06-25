#pragma once

#include <string>

#include "types.hpp"
#include "events.hpp"

class World {
    public:
        std::string name;
        uint64_t seed;
        Date sim_startDate;
        Date sim_endDate;
        
        int deltaTime = 1;
        int tickcounter;
        int tickLimit;

        World(){}

        World(std::string _name, uint64_t _seed, int _tickLimit, int _deltaTime){
            name = _name;
            seed = _seed;
            tickLimit = _tickLimit;
            deltaTime = _deltaTime;
        }
};