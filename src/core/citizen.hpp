#pragma once

#include <string>
#include <vector>
#include <map>

#include "../lib/types.hpp"
#include "../extern/nlohmann/json.hpp"
#include "./settlement.hpp"
#include "./event.hpp"

enum class Sex {
    MALE,
    FEMALE,
    OTHER
};

enum class GenderIdentity {
    MASCULINE,
    FEMININE,
    OTHER
};

enum class SexualOrientation {
    HETERO,
    HOMO,
    BISEXUAL,
    ASEXUAL,
    OTHER
};

enum class Ethnicity {};

enum class Religion {};

enum class Traits {};

enum class Skills {};

enum class PoliticalAlignment {};

class Citizen {
    public:
        // identity
        std::string firstName;
        std::string lastName;
        uint64_t id;
        Date birthDate;
        std::optional<Date> deathDate;
        bool alive;

        // demographics
        uint64_t age;
        Sex sex;
        GenderIdentity genderIdentity;
        SexualOrientation sexualOrientation;
        Ethnicity ethnicity;
        Religion religion;
        std::string nationality;

        // Location / Residence
        Settlement settlement;
        
        // intelligence / skills / traits
        uint8_t intelligence;
        uint8_t strength;
        uint8_t charisma;
        uint8_t dexterity;
        uint8_t creativity;
        std::vector<Traits> traits;
        std::map<Skills, uint8_t> skills;

        // relationships
        std::vector<uint8_t> parents;
        std::vector<uint8_t> children;
        std::optional<uint8_t> spouse;
        std::vector<uint8_t> friends;
        std::vector<uint8_t> enemies;
        uint64_t householdId;

        // Occupation
        std::string jobTitle;
        std::optional<uint64_t> workplaceId;
        bool employes;
        float income;

        // psychological / mental state
        int happiness; // -100 to +100? => Interval
        int stress;
        int loyality; // to settlement, nation, ideology
        bool mentallyStable;

        // Beliefs / politics
        PoliticalAlignment politicalAlignment;
        std::map<std::string, int> opinionMap; // opinion on citizens or factions

        // health
        uint8_t health; // 0 - 100
        bool sick;
        std::vector<std::string> diseases;
        bool pregnant;
        float fertilityChance;

        // simulation state;
        bool markedForDeletion;
        std::vector<std::unique_ptr<Event>> scheduledEvents;
        uint32_t ticksSinceLastUpdate;

        // Meta
        std::string notes;
        nlohmann::json customData; // mods/plugin-like behaviour?


};