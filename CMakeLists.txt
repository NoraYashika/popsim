cmake_minimum_required(VERSION 3.21)
cmake_policy(SET CMP0167 OLD)
project(popsim LANGUAGES CXX)

# Set C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find Boost
find_package(Boost REQUIRED COMPONENTS filesystem)

# find Qt
find_package(Qt6 REQUIRED COMPONENTS Widgets Gui Core OpenGL OpenGLWidgets)

# UI header generation (auto runs uic/moc/rcc as needed)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Source files
file(GLOB_RECURSE SOURCES
    src/*.cpp
    src/*.hpp
    src/*.h
    src/*.ui
)

# put in the resources
if(WIN32)
    enable_language(RC)
    set(ICON_SRC "${CMAKE_CURRENT_SOURCE_DIR}/resources/resources.rc.in")
    set(ICON_OUT "${CMAKE_CURRENT_BINARY_DIR}/resources.rc")
    configure_file(${ICON_SRC} ${ICON_OUT} @ONLY)
    set(APP_ICON_RESOURCE_WINDOWS ${ICON_OUT})
endif()

add_executable(popsim ${SOURCES} ${APP_ICON_RESOURCE_WINDOWS})

# Link Libraries
target_link_libraries(popsim PRIVATE
    Qt6::Widgets
    Qt6::Gui
    Qt6::Core
    Qt6::OpenGL
    Qt6::OpenGLWidgets
    Boost::filesystem
    opengl32
)

file(COPY ${CMAKE_SOURCE_DIR}/resources/data DESTINATION ${CMAKE_BINARY_DIR})
file(COPY ${CMAKE_SOURCE_DIR}/resources/assets DESTINATION ${CMAKE_BINARY_DIR})