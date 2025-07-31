#pragma once

#include <atomic>
#include <condition_variable>
#include <mutex>
#include <thread>

#include "world.hpp"

namespace core {
    class Engine {
        private:
            void run();

            std::thread worker;
            std::mutex mtx;
            std::condition_variable cv;

            bool running = true;
            bool tickRequested = false;

            //World world;

        public:
            Engine();
            ~Engine();

            void launch();    // start background thread
            void shutdown();  // graceful exit
            void tick();      // signal: advance one tick

    };
}