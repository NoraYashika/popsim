#pragma once

#include <string>

#include "../lib/world.hpp"
#include "../lib/rng.hpp"
#include "../lib/types.hpp"

#define PRESET_TICKLIM 65535 // 16 bit integer, preset but not limit (maximum limit is limit of the int type)

class WorldGen {
    private:
        std::string name;
        uint64_t seed = 0;
        int tickLimit;
        Date sim_startDate;
        Date sim_endDate;
        
    public:
        void createSeed(){
            std::string uuid = generateUUIDv4();
            seed = uuidToSeed(uuid);
        }
    
        WorldGen(std::string _name = "", int _seed = -1, int _tickLimit = PRESET_TICKLIM){
            name = _name;
            seed = _seed;
            tickLimit = _tickLimit;
        }

        WorldGen(){}

        void setName(std::string _name){
            name = _name;
        }

        World gen(){            
            if (seed == 0){
                createSeed();
            }


            World ret_val(name, seed, tickLimit);
            return ret_val;
        }
};