//#pragma once // 🖕 yes, even here

#include <atomic>
#include <boost/filesystem.hpp>
#include <chrono>
#include <iostream>
#include <QtWidgets/QApplication>
#include <string>
#include <thread>

#include "core/worldgen.hpp"
#include "lib/fs.hpp"
#include "lib/rng.hpp"
#include "lib/world.hpp"
#include "lib/ui/windows/MainWindow.hpp"

using namespace std::chrono_literals;

std::atomic_bool r = false;
boost::filesystem::path homepath = getHomePath();
std::string homepath_str = homepath.string();

void init(){
    const std::string folders[] = {
        "/data",
        "/data/temp"
    };

    for (std::string folder : folders){
        std::cout << "Attempting to create folder: " << folder << std::endl;
        if (createFolder(homepath_str + folder)){
            std::cout << "Created successfully" << std::endl;
        } else {
            std::cout << "Folder already exists" << std::endl;
        }
    }
}

void simengine(){
    while (r.load()){
        std::cout << r << "\n";
        std::this_thread::sleep_for(3s);
    }
    std::cout << "Engine stopped.\n";
}

int main(int argc, char** argv){
    init();
    r = true;
    std::thread engine(simengine);

    QApplication app(argc, argv);
    MainWindow window;
    window.show();

    int ret_val = app.exec();
    r = false;
    if (engine.joinable())
        engine.join();

    return ret_val;
}