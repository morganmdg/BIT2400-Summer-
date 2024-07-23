//
// Created by morga on 2024-07-21.
//

#include <iostream>
#include <string>
#include "birdHouse.h"

#include <fstream>
#include <algorithm>

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

    //Read and count words from file
    string readWords[100];
    int numWords = 0;
    int i;
    while(getline(birdfile, readWords[i])) {
        cout << readWords[i] << endl;
        numWords++;
    }

    //Print number of words read from the file for test
    cout << "Number of words read from the file: " << numWords << endl;

    //Create string array and allocate number of words from file
    wordList = new string [numWords];

    //Copy words from the temporary string array to wordList

    //Close the file
    birdfile.close();
}
    //Destructor
    birdHouse::~birdHouse(){
        //Add code later
    }


