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

    //Initialise randomWord variable
    randomWord = wordGenerator();
}

void birdHouse::birdHouseInstructions()
{
    //Game Instructions
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

    //Initalize userGuess to '-' and depending on length of random word
    string userGuess (randwordLength, '-');
    cout << userGuess << endl;

    //Initalise variable to keep track of remaining user guesses
    int numGuess = 8;

    //Initalise variable to keep track of number of wrong user guesses
    int wrongGuess = 0;

    //Loop through while user still has guesses leftover
    while (numGuess > 0 && userGuess != randomWord)
    {
        //Prompt user input
        cout << "Enter a letter below: " << endl;
        char uInput;
        cin >> uInput;

        //Loop to check if guessed letter is found in the random word string using find
        int position = randomWord.find(uInput);

        //Boolean operator for if letter is found
        bool found = false;

        //Loop through the string to see if user guessed letter is found
        for (size_t i = 0; i < randomWord.length(); i++)
        {
            if (randomWord[i] == uInput) {

                userGuess[i] = uInput;
                found = true;
            }
        }
            if (found == true) {
                cout << userGuess << endl;
                cout << "Yay! You guessed a letter correctly" << endl;;
            }
            else
            {
                cout << "Uh oh. Your letter was not found. Try again" << endl;
                //Decrement number of user guesses and increment number of wrong user guesses
                numGuess --;
                wrongGuess++;
                //Call method to print portion of bird house
                printbirdHouse(wrongGuess);
            }

            //Call word guess method to see if user would like to take a chance to guess full word
            wordGuess();

            //Conditional statement for if userGuess is the same as random word
            if (userGuess == randomWord)
            {
                cout << "Congrats you guessed the word: " << randomWord << endl;
                exit(0);
            }

            //Conditional statement for if user runs out of guesses
            if (numGuess == 0)
            {
                cout << "Oh no!! You're out of guesses :(" << endl;
                cout << "You lose" << endl;
               exit(0);
            }
        }

    }


void birdHouse::wordGuess()
{
    //Ask user after each guess if they would like to guess the whole word
    cout << "Would you like to try guessing the word? 1 = YES, 0 = NO " <<endl;
    int ynInput;
    cin >> ynInput;

    if (ynInput == 1)
    {
        cout << "Take a chance and guess the full word below: "<< endl;
        string guessInput;
        cin >> guessInput;

        if (guessInput == randomWord)
        {
            cout << "Wow!!! You guessed the word! Congratulations." <<endl;
            cout << "YOU WIN :)" << endl;
            exit(0);
        }
        else
        {
            cout << "Oh no. Your guess was not a match. You lose. "<< endl;
            cout << "GAME OVER" << endl;
            cout << "        |    " << endl;
            cout << "        |    " << endl;
            cout << R"(     / \   )" << endl;
            cout << R"(    /   \)" << endl;
            cout << R"(   /     \)" << endl;
            cout << R"(  /       \)" << endl;
            cout << "   ----------- " << endl;
            cout << "  <           > " << endl;
            cout << "  <     0     > " << endl;
            cout << "   ---------- " << endl;
            cout << "   GAME OVER :(   " << endl;
           exit(0);
        }
    }
}

int birdHouse::printbirdHouse(int iwrongGuess)
{
//Print out part of birdhouse each wrong guess
    switch(wrongGuess)
    {
    case 1:
        cout << " | " << endl;
        cout << " | " << endl;
        break;
    case 2:
        cout << R"( \ )" << endl;
        cout << R"(  \ )" << endl;
        cout << R"(   \ )" << endl;
        break;
    case 3:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(     / \   )" << endl;
        cout << R"(    /   \)" << endl;
        cout << R"(   /     \)" << endl;
        cout << R"(  /       \)" << endl;
        break;
    case 4:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(     / \   )" << endl;
        cout << R"(    /   \)" << endl;
        cout << R"(   /     \)" << endl;
        cout << R"(  /       \)" << endl;
        cout << "   ----------- " << endl;
        break;
    case 5:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(     / \   )" << endl;
        cout << R"(    /   \)" << endl;
        cout << R"(   /     \)" << endl;
        cout << R"(  /       \)" << endl;
        cout << "   ----------- " << endl;
        cout << "  <    " << endl;
        cout << "  <     " << endl;
        break;
    case 6:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(     / \   )" << endl;
        cout << R"(    /   \)" << endl;
        cout << R"(   /     \)" << endl;
        cout << R"(  /       \)" << endl;
        cout << "   ----------- " << endl;
        cout << "  <           > " << endl;
        cout << "  <           > " << endl;
        break;
    case 7:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(     / \   )" << endl;
        cout << R"(    /   \)" << endl;
        cout << R"(   /     \)" << endl;
        cout << R"(  /       \)" << endl;
        cout << "   ----------- " << endl;
        cout << "  <           > " << endl;
        cout << "  <     0     > " << endl;
        break;
    case 8:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(     / \   )" << endl;
        cout << R"(    /   \)" << endl;
        cout << R"(   /     \)" << endl;
        cout << R"(  /       \)" << endl;
        cout << "   ----------- " << endl;
        cout << "  <           > " << endl;
        cout << "  <     0     > " << endl;
        cout << "   ---------- " << endl;
        cout << "    GAME OVER   " << endl;
        break;
    }
    return 0;
}

birdHouse::~birdHouse(){
    //Free memory using delete[]
        delete[]wordList;
    }


