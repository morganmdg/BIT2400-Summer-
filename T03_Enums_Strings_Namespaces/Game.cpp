//
// Created by morga on 2024-07-18.
//
#include "Game.h"

void game::play() {
    Hero player;

    cout << "Please enter your name:  ";
    cin.ignore(1);
    getline(cin, player.name);

    int fightsWon = 0;

    while (fight(&player) == true) {
        fightsWon++;
        if (fightsWon < 5) {
            levelup(&player);
            player.health = player.healthMax;
        }
        else {
            cout << "You've defeated 5 opponents and won the championship!" << endl;
            return;
        }
    }
}

void game::levelup(Hero* player) {
    int input;

    cout << "You've won a fight! Choose an attribute to increase." << endl << endl;
    cout << "1) Increase Health by 2 (currently" << player->healthMax << ")" << endl;
    cout << "2) Increase Attack by 1 (currently " << player->attack << ")" << endl;
    cout << "3) Increase Defense by 1 (curently " << player->defense << ")" << endl;

    cin >> input;

    switch(input) {
        case 1:
            player->healthMax += 2;
        break;
        case 2:
            player->attack++;
        break;
        case 3:
            player->defense++;
        break;
    }
    }
void game::showstats(Hero hero) {
    cout << hero.name << endl;
    cout << "Health: " << hero.health << endl;
    cout << "Attack: " << hero.attack << endl;
    cout << "Defense: " << hero.defense << endl << endl;

}
bool game::fight(Hero* player) {
    Hero enemy;
    enemy.name = nameGenerator();
    enemy.health = (rand() % 8 + 1);
    enemy.defense = rand() % 4;
    enemy.attack = rand() % 4;

    cout << endl << player->name << " faces " << enemy.name << " ! " << endl;
    showstats(*player);
    showstats(enemy);

    while (player->health > 0 && enemy.health > 0) {
        attack(player, &enemy);
        if (enemy.health > 0) {
            attack(&enemy, player);
        }
        cout << endl;
    }

        if(player->health > 0) {
            cout << player->name << "  defeated " << enemy.name << "!" << endl << endl;
            return true;
        }
        else {
            cout << player->name << " was defeated by " << enemy.name << "." << endl << endl;
            return false;
        }
    }
void game::attack(Hero* a, Hero* b) {
    int roll = rand() % 6 + 1; a-> attack;
    cout << endl << a->name << " attacks " << b->name << " for " << roll;

    if(roll > b->defense) {
        b->health -= roll - b->defense;
        if(b->health < 0) {
            cout << ", vanquishing them! ";
        } else {
            cout << ", bringing " << b->name <<"'s health down to " << b-> health << "!";
        }
        } else {
                cout << ", but they managed to dodge out of the way. ";
            }
            }

string game:: nameGenerator() {
    string prefix[2] = { "", "The "
    };
    string adjective[11] = {
        "Ultimate ",
        "Steel ",
        "Iron ",
        "Wicked ",
        "Striking ",
        "Azure ",
        "Pink ",
        "Emerald ",
        "Crimson ",
        "Silent ",
        "Keen ",
    };
    string noun[10] = {
        "Brick ",
        "Tower ",
        "One ",
        "Adversary ",
        "Warrior ",
        "Wanderer ",
        "Fists ",
        "Professor ",
        "Contendor ",
        "Warlock ",
    };

    string name = prefix [rand() % 2];
    name += adjective[rand () % 11];
    name += noun[rand() % 10];

    return name;
}

