#include <iostream>
#include <time.h>
#include <math.h>
#include "Game.h"

using namespace std;

int main() {
    enum State {
        QUIT,
        PLAY,
        HELP,
        MAINMENU
    };

    State currentState = MAINMENU;
    int input;

    while (currentState != QUIT) {
        switch (currentState) {
            case MAINMENU:
                cout << "Welcome! What would you like to do?" << endl << endl;
                cout << "1) Play" << endl;
                cout << "2) Help" << endl << endl;
                cout << "0) Quit game" << endl << endl;

                cin >> input;

                if (input < 0 || input > 2) {
                    cout << "Invalid input." << endl;
                }
                else {
                    currentState = static_cast<State>(input);
                }
                    break;

            case HELP:
                cout << "How to play:" << endl;
                cout << "You, and many other heroes, have been selected to compete" << endl;
                cout << "against each other for sport and glory in a competition" << endl;
                cout << "for the ages! Name your champion and attempt to defeat five" << endl;
                cout << "adversaries to win the tournament. After each victory you " << endl;
                cout << "will get to enhance one of your abilities. Choose wisely!" << endl << endl;

            currentState = MAINMENU;
            break;

            case PLAY:
                game::play();
            currentState = MAINMENU;
            break;
        }
    }

    return 0;
}
