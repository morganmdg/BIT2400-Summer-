#include <fstream>
#include <iostream>
#include <string>
#include "birdHouse.h"

using namespace std;

int main()
{
    //Welcome message
    cout << "Welcome to the 'Bird House' Hangman Game!" << endl;

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

    //Test: Comment out after
    string randomWord = startbirdHouse.wordGenerator();
    //cout << "Your random word is: " << randomWord << endl;

    //Print out birdhouse game instructions
    startbirdHouse.birdHouseInstructions();

    //Start birdHouse game
    startbirdHouse.birdHouseGame();

    return 0;
}

