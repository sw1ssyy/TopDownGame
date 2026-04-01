//
// Created by Johan on 01/04/2026.
//

#include "Asset.h"

Asset::Asset(std::string fileName, std::string filePath) : _fileName(std::move(fileName)), _filePath(std::move(filePath))
{

}

std::string Asset::GetFileName()
{
    return _fileName;
}

std::string Asset::GetFilePath()
{
    return _filePath;
}

void Asset::SetTexture(Texture2D texture)
{
    Texture = texture;
}

Texture2D Asset::GetTexture()
{
    return Texture;
}
