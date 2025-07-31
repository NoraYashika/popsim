//#pragma once // 🖕 yes, even here

#include <boost/filesystem.hpp>
#include <chrono>
#include <iostream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QSplashScreen>
#include <QtGui/QPixmap>
#include <QtCore/QTimer>
#include <memory>
#include <vector>

#include "extern/glad/glad.h"
#include "extern/GLFW/glfw3.h"
#include "extern/nlohmann/json.hpp"

#include "lib/fs.hpp"
#include "lib/rng.hpp"
#include "core/simengine.hpp"
#include "core/event.hpp"
#include "lib/ui/windows/MainWindow.hpp"

using namespace std::chrono_literals;

boost::filesystem::path homepath = getHomePath();
std::string homepath_str = homepath.string();

std::vector<std::unique_ptr<Event>> event_queue;

int main(int argc, char** argv){
    QApplication app(argc, argv);
    QPixmap splashImg(QString::fromStdString(homepath_str + "/assets/splashscreen.png"));
    QSplashScreen splash(splashImg);
    splash.show();

    std::this_thread::sleep_for(3s);
    splash.close();

    core::Engine engine;

    MainWindow window(&engine, &event_queue);
    window.show();

    int ret_val = app.exec();

    return ret_val;
}