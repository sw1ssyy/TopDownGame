//
// Created by Johan on 01/04/2026.
//

#ifndef TOPDOWNGAME_GAMECORE_H
#define TOPDOWNGAME_GAMECORE_H
#include "Assets/GameAssets.h"


class GameCore
{
public:
    GameCore(const GameCore&) = delete;
    GameCore& operator=(const GameCore&) = delete;
    GameCore(GameCore&&) = delete;
    GameCore& operator=(GameCore&&) = delete;
    static GameCore& GetInstance()
    {
        static GameCore instance;
        return instance;
    }

    void Run();

    GameAssets& GetGameAssets();

private:
    GameAssets _gameAssets = {};

    const int SCREEN_WIDTH = 854;
    const int SCREEN_HEIGHT = 480;

    GameCore() = default;
    ~GameCore() = default;
};

#endif //TOPDOWNGAME_GAMECORE_H