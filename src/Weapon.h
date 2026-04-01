//
// Created by Johan on 02/04/2026.
//

#ifndef TOPDOWNGAME_WEAPON_H
#define TOPDOWNGAME_WEAPON_H
#include "raylib.h"


class Weapon
{
public:
    Weapon();
    float& GetWeaponX();
    float& GetWeaponY();
    Texture2D& GetWeaponTexture();
    Rectangle& GetWeaponRect();
    Rectangle& GetWeaponTextureRect();
private:
    float x;
    float y;
    Texture2D texture;
    Rectangle textureRect;
    Texture2D idleTexture{};
    Rectangle idleTextureRect{};
    Rectangle positionRect;
};


#endif //TOPDOWNGAME_WEAPON_H