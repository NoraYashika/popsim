#pragma once

#include <string>
#include <vector>

struct Citizen {
    int id;
    std::string name;
    int age;
    std::string occupation;
    std::vector<std::string> traits;
    int health;
    int health_lim;
    int happiness;
    int happiness_lim;

    static Citizen from_json_file(const std::string& filepath);
    void save_to_json_file(const std::string& filepath) const;
};