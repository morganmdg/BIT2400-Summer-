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
    int health = 5;
    int defense = 0;
    int attack = 0;
    };

    void play ();
}
#endif //GAME_H
