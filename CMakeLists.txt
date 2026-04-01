cmake_minimum_required(VERSION 4.0)
project(TopDownGame)

include(FetchContent)
set(RAYLIB_VERSION 5.5)
FetchContent_Declare(
        raylib
        URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
)
FetchContent_MakeAvailable(raylib)


# Define your executable
add_executable(TopDownGame src/main.cpp
        src/Character.cpp
        src/Character.h
        src/AssetLoader.cpp
        src/AssetLoader.h
        src/Asset.cpp
        src/Asset.h
        src/GameAssets.cpp
        src/GameAssets.h
        src/GameCore.cpp
        src/GameCore.h
        src/main.cpp)

target_link_libraries(TopDownGame raylib)