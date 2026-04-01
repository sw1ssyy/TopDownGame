//
// Created by Johan on 01/04/2026.
//

#ifndef TOPDOWNGAME_ASSETLOADER_H
#define TOPDOWNGAME_ASSETLOADER_H
#include <string>
#include <vector>

#include "Asset.h"


class AssetLoader
{
public:
    void LoadAssets();

    void UnLoadAssets();

    void AddAsset(std::string fileName, std::string filePath);

    Asset& GetAssetByName(const std::string &name);

private:
    std::vector<Asset> Assets;
};


#endif //TOPDOWNGAME_ASSETLOADER_H