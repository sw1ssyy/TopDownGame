//
// Created by Johan on 01/04/2026.
//

#include "Character.h"

#include <iostream>

#include "GameCore.h"

Character::Character() :
                         texture(
                             GameCore::GetInstance().GetGameAssets().GetAssetLoader().GetAssetByName("Character").
                             GetTexture()), CharacterRectangle({250, 350, 250 + 32, 350 + 32}),Texturerectangle({16,0,32,32})
{
}



void Character::SetCharacterX(float value)
{
    CharacterRectangle.x = value;
}

void Character::SetCharacterY(float value)
{
    CharacterRectangle.y = value;
}


Rectangle & Character::GetCharacterRectangle()
{
    return CharacterRectangle;
}

Rectangle & Character::GetTextureRectangle()
{
    return Texturerectangle;
}

void Character::SetTextureRectangle(Rectangle rectangle)
{
    Texturerectangle = rectangle;
}

Texture2D & Character::GetCharacterTexture()
{
    return texture;
}

void Character::GetInputEvents()
{
    if (IsKeyDown(KEY_D))
    {
        SetCharacterX(GetCharacterRectangle().x + 4.0f);
    }
    if (IsKeyDown(KEY_A))
    {
        SetCharacterX(GetCharacterRectangle().x - 4.0f);
    }
    if (IsKeyDown(KEY_W))
    {
        SetCharacterY(GetCharacterRectangle().y - 4.0f);
    }
    if (IsKeyDown(KEY_S))
    {
        SetCharacterY(GetCharacterRectangle().y + 4.0f);
    }

}

void Character::CheckWeaponCollisions(Weapon &weapon)
{

    if (CheckCollisionRecs(GetCharacterRectangle(), weapon.GetWeaponRect()) && IsKeyDown(KEY_E))
    {
        SetTextureRectangle({16,64,32,32});
    }
}
