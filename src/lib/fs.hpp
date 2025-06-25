#pragma once

#include <boost/filesystem.hpp>
#include <fstream>

namespace fs = boost::filesystem;

void createFolder(const std::string& pathStr) {
    fs::path folderPath(pathStr);
    if (!fs::exists(folderPath)) {
        fs::create_directories(folderPath);  // creates nested folders too
    }
}

void createFolder(const std::string& pathStr) {
    fs::path folderPath(pathStr);
    if (!fs::exists(folderPath)) {
        fs::create_directories(folderPath);  // creates nested folders too
    }
}