#include <fstream>
#include <iostream>
#include <string>
#include "birdHouse.h"
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    //Welcome message
    cout << "Welcome to the Hangman Game!" << endl;

    //Create string for user input and file extension
    string inputStr;
    string extensionStr = ".txt";

    //Take user input and put in inputStr
    cout << "Please enter the name of the file you want to read the list of words from: " << endl;
    getline (cin, inputStr);

    //Create filename by concatenating filename + extension
    string filename = inputStr + extensionStr;

    //Execute opening/reading file
    birdHouse startbirdHouse(filename);

    //Random word test
    string randomWord = startbirdHouse.wordGenerator();
    //Comment out after
    cout << "Your random word is: " << randomWord << endl;

    startbirdHouse.birdHouseInstructions();

    //Random length test
    int randwordLength = startbirdHouse.lengthGenerator(randomWord);
    cout << "The length of your random word is: " << randwordLength <<endl;

    //Initalize userGuess to - depending on length of random word
    string userGuess (randwordLength, '-');
    cout << userGuess << endl;

    //Remaining user guesses
    int numGuess = 8;

    //Number of wrong user guesses
    int wrongGuess = 0;

    //Loop through while user still has guesses leftover
    while (numGuess > 0 && userGuess != randomWord)
    {
        //Prompt user input
        cout << "Enter a letter below: " << endl;
        char uInput;
        cin >> uInput;

        //Loop to check if guessed word is found in the random word string using find
        int position = randomWord.find(uInput);

        if(position >= 0)
        {
            bool update = false;
            while (position >= 0)
            {
                userGuess[position] = uInput;
                position = randomWord.find(uInput, position + 1);
                update = true;
            }
            if (update == true) {
                cout << userGuess << endl;
                cout << "Yay! You guessed a letter correctly" << endl;;
            }
            else
            {
                cout << "Uh oh. Your letter was not found. Try again" << endl;
                numGuess --;
                wrongGuess++;

                //Add switch case for birdsnest
            }

            startbirdHouse.wordGuess();

            if (userGuess == randomWord)
            {
                cout << "Congrats you guessed the word: " << randomWord << endl;
                return 0;
            }
            if (numGuess == 0)
            {
                cout << "Oh no!! You're out of guesses :(" << endl;
                cout << "You lose" << endl;
                return 0;
            }
        }

    }
    return 0;
}

