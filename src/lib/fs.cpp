#include "fs.hpp"

#include <boost/filesystem.hpp>
#include <fstream>
#include <vector>

namespace fs = boost::filesystem;

bool createFolder(const std::string& pathStr){
    fs::path folderPath(pathStr);
    if (!fs::exists(folderPath)) {
        fs::create_directories(folderPath);  // creates nested folders too
        return true;
    }

    return false;
}

fs::path getHomePath(){
    return boost::filesystem::current_path();
}

void PSWA::createArchive(const fs::path& source, const std::string& target){
    std::ofstream out(target, std::ios::binary);
    if (!out) throw std::runtime_error("Failed to open archive for writing.");

    // Write a simple header
    out.write("PSWA", 4);
    for (auto& file : fs::recursive_directory_iterator(source)){
        if (fs::is_regular_file(file)){
            std::ifstream in(file.path(), std::ios::binary);
            std::string relative = fs::relative(file.path(), source).string();

            uint16_t pathLen = relative.size();
            uint64_t fileSize = fs::file_size(file);

            // Write metadata
            out.write(reinterpret_cast<char*>(&pathLen), sizeof(pathLen));
            out.write(relative.c_str(), pathLen);
            out.write(reinterpret_cast<char*>(&fileSize), sizeof(fileSize));

            // Write file content
            std::vector<char> buffer(fileSize);
            in.read(buffer.data(), fileSize);
            out.write(buffer.data(), fileSize);
        }
    }
}

void PSWA::extractArchive(const std::string& source, const fs::path& target){
    std::ifstream in(source, std::ios::binary);
    if (!in) throw std::runtime_error("Failed to open archive.");

    char header[4];
    in.read(header, 4);
    if (std::string(header, 4) != "PSWA") throw std::runtime_error("Invalid archive.");

    while (in.peek() != EOF){
        uint16_t pathLen;
        in.read(reinterpret_cast<char*>(&pathLen), sizeof(pathLen));
        
        std::string path(pathLen, '\0');
        in.read(path.data(), pathLen);

        uint64_t fileSize;
        in.read(reinterpret_cast<char*>(&fileSize), sizeof(fileSize));

        std::vector<char> buffer(fileSize);
        in.read(buffer.data(), fileSize);

        fs::path fullPath = target / path;
        fs::create_directories(fullPath.parent_path());

        std::ofstream out(fullPath, std::ios::binary);
        out.write(buffer.data(), fileSize);
    }
}