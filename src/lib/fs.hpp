#pragma once

#include <boost/filesystem.hpp>
#include <string>

namespace fs = boost::filesystem;

bool createFolder(const std::string& pathStr);

fs::path getHomePath();

namespace PSWA {
    void createArchive(const fs::path& source, const std::string& target);

    void extractArchive(const std::string& source, const fs::path& target);
}