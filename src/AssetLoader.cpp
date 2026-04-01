//
// Created by Johan on 01/04/2026.
//

#include "AssetLoader.h"

#include <iostream>

#include "raylib.h"

void AssetLoader::AddAsset( std::string fileName,  std::string filePath)
{

    Assets.emplace_back(fileName, filePath);
}

Asset& AssetLoader::GetAssetByName(const std::string& name)
{
    for (Asset& asset : Assets)
    {
        if (asset.GetFileName() == name)
        {
            return asset;
        }
    }

    throw std::runtime_error("Asset not found: " + name);
}

void AssetLoader::LoadAssets()
{
    for (Asset& asset : Assets)
    {
        std::cout << "Loaded Asset! \nFile Name: " + asset.GetFileName() + "\n";
        asset.SetTexture(LoadTexture(asset.GetFilePath().c_str()));
    }
}


void AssetLoader::UnLoadAssets()
{
    for (Asset& asset : Assets)
    {
        std::cout << "UnLoaded Asset! \nFile Name: " + asset.GetFileName() + "\n";
        UnloadTexture(asset.GetTexture());
    }
}
