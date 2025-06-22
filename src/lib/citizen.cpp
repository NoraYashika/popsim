#include <fstream>

#include "citizen.hpp"
#include "../extern/nlohmann/json.hpp"

Citizen Citizen::from_json_file(const std::string& filepath){
    std::ifstream file(filepath);
    nlohmann::json j;
    file >> j;
    return Citizen{
        j["id"],
        j["name"],
        j["age"],
        j["occupation"],
        j["traits"].get<std::vector<std::string>>(),
        j["health"],
        j["health_lim"],
        j["happiness"],
        j["happiness_lim"]
    };
}

void Citizen::save_to_json_file(const std::string& filepath) const {
    nlohmann::json j = {
        {"id", id},
        {"name", name},
        {"age", age},
        {"occupation", occupation},
        {"traits", traits},
        {"health", health},
        {"health_lim", health_lim},
        {"happiness", happiness},
        {"happiness_lim", happiness_lim}
    };
    std::ofstream file(filepath);
    file << j.dump(4);
}