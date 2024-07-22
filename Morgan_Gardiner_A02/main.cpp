#include <fstream>
#include <iostream>
#include <string>
#include "birdHouse.h"

using namespace std;

int main()
{
    cout << "Hello, welcome to the Hangman Game!" << endl;
    string inputStr;
    string extensionStr = ".txt";

    cout << "Please enter the name of the file you want to read the list of words from: " << endl;
    getline (cin, inputStr);

    string filenameStr = inputStr + extensionStr;

    cout << "Confirming you will be reading from the " << filenameStr << " file. " << endl;

    string filename = filenameStr;

    birdHouse startbirdHouse(filename);

}
