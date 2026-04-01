//
// Created by Johan on 01/04/2026.
//

#ifndef TOPDOWNGAME_CHARACTER_H
#define TOPDOWNGAME_CHARACTER_H
#include "raylib.h"
#include "Weapon.h"


class Character
{

public:
    Character();
    void SetCharacterX(float value);
    void SetCharacterY(float value);
    Rectangle &GetCharacterRectangle();
    Rectangle &GetTextureRectangle();
    void SetTextureRectangle(Rectangle rectangle);
    Texture2D &GetCharacterTexture();
    void GetInputEvents();
    void CheckWeaponCollisions(Weapon& weapon);

private:
    Rectangle CharacterRectangle;
    Rectangle Texturerectangle;
    Texture2D texture;

};


#endif //TOPDOWNGAME_CHARACTER_H