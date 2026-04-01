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
        src/Assets/AssetLoader.cpp
        src/Assets/AssetLoader.h
        src/Assets/Asset.cpp
        src/Assets/Asset.h
        src/Assets/GameAssets.cpp
        src/Assets/GameAssets.h
        src/GameCore.cpp
        src/GameCore.h
        src/main.cpp
        src/Weapon.cpp
        src/Weapon.h)

target_link_libraries(TopDownGame raylib)