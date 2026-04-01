//
// Created by Johan on 01/04/2026.
//

#include "GameCore.h"

#include "Character.h"
#include "raylib.h"
#include "Weapon.h"

void GameCore::Run()
{

    InitWindow(SCREEN_WIDTH, 480, "Raylib GitHub Test");
    _gameAssets.Load();
    Asset map = _gameAssets.GetAssetLoader().GetAssetByName("Map");
    Character character = {};
    Weapon weapon = {};
    Camera2D camera2D = {};
    camera2D.zoom = 1.5f;
    camera2D.offset = {static_cast<float>(SCREEN_WIDTH / 2), static_cast<float>(SCREEN_HEIGHT / 2)};

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        BeginDrawing();
        camera2D.target = {character.GetCharacterRectangle().x, character.GetCharacterRectangle().y};
        BeginMode2D(camera2D);
        character.GetInputEvents();
        character.CheckWeaponCollisions(weapon);
        DrawTextureRec(map.GetTexture(), {0,0,1000,1000},{0,0},WHITE);
        DrawTextureRec(character.GetCharacterTexture(), character.GetTextureRectangle(),{character.GetCharacterRectangle().x, character.GetCharacterRectangle().y},WHITE);
        DrawTextureRec(weapon.GetWeaponTexture(), weapon.GetWeaponTextureRect(),{weapon.GetWeaponX(), weapon.GetWeaponY()},WHITE);
        EndDrawing();
    }

    _gameAssets.Unload();
    CloseWindow();
}


GameAssets& GameCore::GetGameAssets()
{
    return _gameAssets;
}

