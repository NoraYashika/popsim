//#pragma once // 🖕 yes, even here

#include <atomic>
#include <boost/filesystem.hpp>
#include <chrono>
#include <iostream>
#include <QtWidgets/QApplication>   
#include <string>
#include <thread>

#include "lib/fs.hpp"
#include "lib/rng.hpp"
#include "lib/ui/windows/MainWindow.hpp"

using namespace std::chrono_literals;

std::atomic_bool r = false;
boost::filesystem::path homepath = getHomePath();
std::string homepath_str = homepath.string();

void simengine(){

}

int main(int argc, char** argv){
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