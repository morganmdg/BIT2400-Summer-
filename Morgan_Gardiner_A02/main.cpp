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
    cout << "Your random word is: " << randomWord << endl;

    cout << "The game will randomly generate a word and provide you with the length of that word" << endl;
    cout << "You have eight guesses to guess all of the letters from the word" << endl;
    cout << "Each incorrect guess will generate sections of the birdsnest" << endl;

    //Random length test
    int randwordLength = startbirdHouse.lengthGenerator(randomWord);
    cout << "The length of your random word is: " << randwordLength <<endl;


    //Initalize userGuess to - depending on length of random word
    string userGuess (randwordLength, '-');
    cout << userGuess << endl;


    //If position not null return position of letter or prompt user to try again

    //How many guesses the user has left
    int numGuess = 8;

    //Loop through while user still has guesses leftover
    while (numGuess > 0 && userGuess != randomWord)
    {
        //Prompt user input
        cout << "Enter a letter below: " << endl;
        char uInput;
        cin >> uInput;

        //Loop to check if guessed word is found in the random word string
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

                //Ask user after each guess if they would like to guess the whole word
                cout << "Would you like to try guessing the word? Enter 1 for yes and 0 for no " <<endl;
                int ynInput;
                cin >> ynInput;

                if (ynInput == 1)
                {
                    cout << "Okay. Please guess the full word below: "<< endl;
                    string guessInput;
                    cin >> guessInput;

                    if (guessInput == randomWord)
                    {
                        cout << "Wow. You guessed the word! Congratulations. You win :)" <<endl;
                        return 0;
                    }
                    else
                    {
                        cout << "Oh no. Your guess was not a match. You lose. "<< endl;
                        cout << "GAME OVER" << endl;
                        return 0;
                    }
                }
            }
        }
        else
        {
            cout << "Uh oh. Your letter was not found. Try again" << endl;
            numGuess --;
        }

        if (numGuess == 0)
        {
            cout << "Oh no!! You're out of guesses :(" << endl;
            cout << "You lose" << endl;
        }
    }
}

