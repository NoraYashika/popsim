# Population Simulator PopSim

## Project Description
A population simulator, made for simulating behaviour based on a random or user-set seed.
Currently it is windows-only but this will change soon.

## Roadmap
- [x] Build System using CMake
    - [ ] Cross Platform

- [ ] Utility Headers
    - [x] fs.hpp (Filesystem)
    - [x] rng.hpp (random number generator)
    - [ ] math.hpp (math utility header)
    - [x] types.hpp (diverse useful types)
        - [x] `Interval`
        - [x] Vectors
            - [x] `Vec2`
            - [x] `Vec3`

    - [x] encoders
        - [x] SHA256 en-/decoder

- [x] external libraries/headers
    - [x] `nlohmann::json`
    - [x] `glad`
    - [x] `glfw`

- [ ] Core Setup (in `lib/core`)
    - [ ] Set up `simengine()` as the simulation's core and main calculation system (thread 1)
    - [ ] Create methods for initialization, proceeding the simulation etc.
    - [ ] Hook up UI to the engine Input (buttons)
    - [x] keep `r` as thread-safe boolean to indicate the engine wether to run or not.
    - [ ] set up core data types
        - [ ] `event.hpp`
        - [ ] `citizen.hpp`
        - [ ] `settlement.hpp`
        - [ ] `world.hpp`
        - [ ] for each:
            - [ ] JSON-based persistence
            - [ ] Conversion functions (`from_json`/`to_json`)

- [ ] Advanced UI + Sim Hook-up
    - [ ] Implement
        - [ ] `newWorld`
        - [ ] `citizenInfo`
        - [ ] `settlementInfo`
    - [ ] populate accordingly

- [ ] Actual simulation
    - [ ] Add Time & Ticks
        - [ ] make simulation proceed by jumping forward by the factor `&Delta;t`
        - [ ] Citizens age
        - [ ] Resources Change
        - [ ] Events occur
    - [ ] Implement scheduler or timeline
        - [ ] use priority queue or sorted event list to process events per tick
        - [ ] simple list of lambdas? Dedicated `Event` class?

- [ ] Visuals and Polish
    - [ ] Add OpenGL World Render (using GLAD)
        - [ ] use `QOpenGLWidget` in Qt
    - [ ] Add Save/Load System
        - [x] Use `.pswa` archive format
        - [ ] serialize world state + any settings
    




## External Sources
<a target="_blank" href="https://icons8.com/icon/p2YCDur26Xn9/simulation">Simulation</a> icon by <a target="_blank" href="https://icons8.com">Icons8</a>

## Licenses of external libraries
- [glad](/src/extern/glad/LICENSE)  (Source: [https://glad.dav1d.de/](https://glad.dav1d.de/))
- [GLFW](/src/extern/GLFW/LICENSE.md)  (Source: [https://github.com/glfw/glfw/releases/tag/3.4](https://github.com/glfw/glfw/releases/tag/3.4))
- [nlohmann/json](/src/extern/nlohmann/LICENSE.MIT)  (Source: [https://github.com/nlohmann/json/releases/tag/v3.12.0](https://github.com/nlohmann/json/releases/tag/v3.12.0))