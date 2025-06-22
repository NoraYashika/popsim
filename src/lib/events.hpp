#pragma once

#include <string>

enum EventClass {
    SYSTEM,
    POLITICS,
    DISASTERS,
    SOCIAL,
    ECONOMY,
    MILITARY,
    TECHNOLOGY,
    CULTURAL,
    MISC
};

enum EventType {
    INFO,
    WARNING,
    ERROR
};

class Event {
    public:
        EventClass event_class;
        EventType event_type;
        std::string eventDescriptor;
        Event(){}
        Event(
            EventClass _event_class = EventClass::SYSTEM,
            EventType _event_type = EventType::INFO,
            std::string _eventDescriptor = ""
        ){
            event_class = _event_class;
            event_type = _event_type;
            eventDescriptor = _eventDescriptor;
        }
};