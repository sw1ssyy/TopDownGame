//
// Created by Johan on 01/04/2026.
//

#include "GameAssets.h"

GameAssets::GameAssets()
{
    AssetLoader.AddAsset("Character", "../assets/Character_Spritesheet.png");
    AssetLoader.AddAsset("Map", "../assets/Map.png");
}

void GameAssets::Load()
{
    AssetLoader.LoadAssets();
}

void GameAssets::Unload()
{
    AssetLoader.UnLoadAssets();
}

AssetLoader GameAssets::GetAssetLoader()
{
    return AssetLoader;
}
