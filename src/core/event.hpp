#pragma once

#include <vector>

//#include "citizen.hpp"
#include "../lib/types.hpp"

enum class EventType{
    // population events
    BIRTH = 0,
    MARRIAGE,
    DEATH, // natural causes
    DIVORCE,
    MIGRATION,

    // personal events
    EDUCATION_STARTED = 100,
    EDUCATION_FINISHED,
    CAREER_CHANGE,
    PROMOTION,
    DEMOTION,
    IMPRISONMENT,
    PRISON_ESCAPE,
    DISCOVERY,

    // political events
    ELECTION = 200,
    COUP,
    LAW_PASSED,
    LAW_REPEALED,
    REVOLUTION,
    DIPLOMATIC_TREATY_SIGNED,
    DIPLOMATIC_TREATY_CANCELLED,
    CIVIL_RIOT,

    // societal Events
    CULTURAL_FESTIVAL = 300,
    RELIGION_FOUNDED,
    RELIGION_SPLIT,
    MASS_MIGRATION,
    MASS_EXILE,
    PUBLIC_WORKS_BUILT,
    PUBLIC_WORKS_ABANDONED,
    TECHNOLOGICAL_BREAKTHROUGH,

    // economic events
    MARKET_CRASH = 400,
    INFLATION_SPIKE,
    INFLATION_DROP,
    TAX_CHANGES,
    RESOURCE_BOOM,
    RESOURCE_BUST,
    TRADE_ROUTE_OPENED,
    TRADE_ROUTE_CLOSED,
    PLAGUE_AFFECTING_LABOR_FORCE,
    STRIKE_DISPUTE,
    LABOR_DISPUTE,

    // military events
    WAR_DECLARATION = 500,
    BATTLE_OCCURS,
    BATTLE_ENDS,
    MILITARY_DRAFT,
    PEACE_TREATY,
    MILITARY_COUP,
    INVASION,

    // natural & environmental events
    EARTHQUAKE = 600,
    DROUGHT,
    FLOOD,
    FAMINE,
    PLAGUE,
    PANDEMIC,
    VOLCANIC_ERUPTION,
    WILDFIRE,
    METEOR_STRIKE,
    CLIMATE_SHIFT
};

class Event {
    private:

    public:
        Date date;
        EventType type;
        std::string description;
        std::vector<uint8_t> involvedPeople;
};