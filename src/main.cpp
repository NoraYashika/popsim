#pragma once // 🖕 yes, even here

#include <QtWidgets/QApplication>
#include <thread>
#include <atomic>
#include <iostream>
#include <chrono>
#include <boost/filesystem.hpp>

#include "core/worldgen.hpp"
#include "lib/archive.hpp"
#include "lib/fs.hpp"
#include "lib/rng.hpp"
#include "lib/world.hpp"
#include "lib/ui/windows/MainWindow.hpp"

using namespace std::chrono_literals;

std::atomic_bool r = false;
boost::filesystem::path homepath = boost::filesystem::current_path();

void init(){
    createFolder("data");
    createFolder("civilians");
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