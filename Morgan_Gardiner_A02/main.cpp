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

    //Random length test
    int randwordLength = startbirdHouse.lengthGenerator(randomWord);
    cout << "Length of random word: " << randwordLength <<endl;

    cout << "The game will randomly generate a word and prove you with the length of that word." << endl;
    cout << "You have eight incorrect guesses before you lose the game" << endl;
    cout << "Enter your guesses below: " << endl;



}
