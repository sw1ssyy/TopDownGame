//
// Created by Johan on 02/04/2026.
//

#include "Weapon.h"

#include "GameCore.h"

Weapon::Weapon() : x(400), y(350),
                   texture(
                       GameCore::GetInstance().GetGameAssets().GetAssetLoader().GetAssetByName("Character").
                       GetTexture()), textureRect({0, 0, 16, 16}),
                   positionRect({x, y, x + texture.width, y + texture.height})
{
}

float& Weapon::GetWeaponX()
{
    return x;
}

float& Weapon::GetWeaponY()
{
    return y;
}

Texture2D & Weapon::GetWeaponTexture()
{
    return texture;
}

Rectangle & Weapon::GetWeaponTextureRect()
{
    return textureRect;
}

Rectangle & Weapon::GetWeaponRect()
{
    return positionRect;
}
