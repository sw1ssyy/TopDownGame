//
// Created by Johan on 01/04/2026.
//

#ifndef TOPDOWNGAME_GAMEASSETS_H
#define TOPDOWNGAME_GAMEASSETS_H
#include "AssetLoader.h"


class GameAssets
{
public:
    GameAssets();
    void Load();
    void Unload();
    AssetLoader GetAssetLoader();
private:

    AssetLoader AssetLoader = {};
};


#endif //TOPDOWNGAME_GAMEASSETS_H