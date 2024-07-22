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

    string filepathStr = "../Morgan_Gardiner_A02/cmake-build-debug/";

    string namepathStr = filepathStr + filenameStr;

    cout << namepathStr;

   // birdHouse startbirdHouse(std::string filename);

    string wordList;  //string that will hold data read from file
    ifstream birdfile;  //creating an object of ifstream
    birdfile.open(namepathStr); //open file for reading

    if (!birdfile.is_open()) //check if file was opened with no errors
    {
        cout << "Error opening file";
        exit(1);
    }

    while(!birdfile.eof())
    {
        getline(birdfile, wordList);  //get line of text from the file
        cout << wordList << endl; //output line of text that was read
    }

    birdfile.close(); //close the file

}
