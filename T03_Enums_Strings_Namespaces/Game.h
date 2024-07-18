//
// Created by morga on 2024-07-18.
//

#ifndef GAME_H
#define GAME_H

#pragma once
#include <iostream>

using namespace std;

namespace game {
        struct Hero {
        string name = "";
        int healthMax = 5;
        int health = 5;
        int defense = 2;
        int attack = 0;
    };

    void play ();
    bool fight(Hero* player);
    void levelup(Hero* player);
    void levelup(Hero* player);
    void attack(Hero* a, Hero* b);
    void showstats(Hero hero);
    string nameGenerator();

}
#endif //GAME_H
