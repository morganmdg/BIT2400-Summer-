//
// Created by morga on 2024-07-21.
//

#include <iostream>
#include <string>
#include "birdHouse.h"

#include <fstream>
#include <algorithm>
#include <ctime>
#include <cmath>

using namespace std;

birdHouse::birdHouse(std::string filename)
{
    //Create string for filepath
    string filepathStr = "./";

    //Concatenate filepath + filename
    string namepathStr = filepathStr + filename;

    //Output filepath + filename for confirmation
    cout << "Confirming you will be reading the following file: " << namepathStr << endl;

    //Creating an object of ifstream
    ifstream birdfile;

    //Open file for reading
    birdfile.open(namepathStr);

    //Check if file was opened without errors
    if (!birdfile.is_open())
    {
        cout << "Error opening file";
        exit(1);
    }

    //Create local string array[100]
    string readWords[100];

    //Read/count words from file and input into readWords array
    NumWords = 0;
    while(NumWords< 100 && (getline(birdfile, readWords[NumWords]))) {
        cout << readWords[NumWords] << endl;
        NumWords++;
    }

    /*Test to print total number of words read from the file
    cout << "Number of words read from the file: " << NumWords << endl;*/

    //Create string array and allocate correct number of words read from file into array
    wordList = new string[NumWords];

    //Copy words from the temporary string array readWords into wordList array
    copy(readWords,readWords+NumWords, wordList);

    /*Test if copying to wordlist worked
    for(i=0; i<numWords; i++)
    {
        cout << wordList[i] << endl;
    }
    //Test output number of words
    cout << numWords;*/

    //Close the file
    birdfile.close();

    randomWord = wordGenerator();
}

void birdHouse::birdHouseInstructions()
{
    //Instructions
    cout << "The game will randomly generate a word and provide you with the length of that word" << endl;
    cout << "You have eight guesses to guess the letters of the word" << endl;
    cout << "Each incorrect guess will generate sections of the birdsnest" << endl;
    cout << "Once the full birdsnest appears you lose " << endl;
}

string birdHouse::wordGenerator()
{
    //Seed random number generator with time
    srand(time(nullptr));
    int i = rand() % NumWords;
    return wordList[i];
}

int birdHouse::lengthGenerator(string randomWord)
{
    //Determine word length and set variable
    int wordLength = randomWord.length();
    return wordLength;
}

void birdHouse::birdHouseGame()
{
    //Random length test
    int randwordLength = lengthGenerator(randomWord);
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

                //Call print birdHouse
            }

            wordGuess();

            if (userGuess == randomWord)
            {
                cout << "Congrats you guessed the word: " << randomWord << endl;
                exit(0);
            }
            if (numGuess == 0)
            {
                cout << "Oh no!! You're out of guesses :(" << endl;
                cout << "You lose" << endl;
               exit(0);
            }
        }

    }
}

void birdHouse::wordGuess()
{
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
            exit(0);
        }
        else
        {
            cout << "Oh no. Your guess was not a match. You lose. "<< endl;
            cout << "GAME OVER" << endl;
           exit(0);
        }
    }
}

void birdHouse::printbirdHouse()
{
//Add switch case
}


//Destructor should free the memory allocated to wordList and set all other values to 0
birdHouse::~birdHouse(){
        delete[]wordList;
    }


