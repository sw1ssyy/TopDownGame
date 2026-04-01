//
// Created by Johan on 01/04/2026.
//

#include "GameCore.h"

#include "raylib.h"

void GameCore::Run()
{

    InitWindow(854, 480, "Raylib GitHub Test");
    _gameAssets.Load();
    Asset map = _gameAssets.GetAssetLoader().GetAssetByName("Map");


    while (!WindowShouldClose()) {
        BeginDrawing();

        DrawTextureRec(map.GetTexture(), {0,0,1000,1000},{0,0},WHITE);
        EndDrawing();
    }

    _gameAssets.Unload();
    CloseWindow();
}


GameAssets& GameCore::GetGameAssets()
{
    return _gameAssets;
}

