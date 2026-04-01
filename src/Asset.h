//
// Created by Johan on 01/04/2026.
//

#ifndef TOPDOWNGAME_ASSET_H
#define TOPDOWNGAME_ASSET_H
#include <string>

#include "raylib.h"


class Asset
{
public:
    Asset(std::string fileName, std::string filePath);
    std::string GetFileName();
    std::string GetFilePath();
    void SetTexture(Texture2D texture);
    Texture2D GetTexture();

private:
     const std::string _fileName;
     const std::string _filePath;
     Texture2D Texture{};
};


#endif //TOPDOWNGAME_ASSET_H