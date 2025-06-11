#pragma once

#include <string>

#include "types.hpp"

class World {
    private:
        std::string name;
        uint64_t seed;
        int tickLimit;
        Date sim_startDate;
        Date sim_endDate;

    public:
        int tickcounter;

        World(){}

        World(std::string _name, uint64_t _seed, int _tickLimit){
            name = _name;
            seed = _seed;
            tickLimit = _tickLimit;
        }

        void tick(){
            // advance by 1 tick
        }
};