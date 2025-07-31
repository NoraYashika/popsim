#include "simengine.hpp"

namespace core {
    Engine::Engine(){
        // nothing for now
    }

    Engine::~Engine(){
        shutdown();
    }

    void Engine::launch(){
        worker = std::thread(&Engine::run, this);
    }

    void Engine::shutdown(){
        std::lock_guard lock(mtx);
        running = false;
        cv.notify_all();
        if (worker.joinable())
            worker.join();
    }

    void Engine::tick(){
        std::lock_guard lock(mtx);
        tickRequested = true;
        cv.notify_all();
    }

    void Engine::run(){
        while(true){
            std::unique_lock lock(mtx);
            cv.wait(lock, [this](){ return tickRequested || running == false; }); // pause the thread until the lambda returns true, otherwise let the thread sleep

            if (!running)
                break;

            // do sim work if loop not broken

            tickRequested = false;
        }
    }
}