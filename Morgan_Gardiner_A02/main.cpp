#include <fstream>
#include <iostream>
#include <string>
#include "birdHouse.h"
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    //Seed random number generator with time
    srand(time(NULL));

    //Welcome message
    cout << "Hello, welcome to the Hangman Game!" << endl;

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




}
