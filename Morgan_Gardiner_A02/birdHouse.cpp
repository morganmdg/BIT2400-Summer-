//
// Created by morga on 2024-07-21.
//

#include <iostream>
#include <string>
#include "birdHouse.h"

#include <fstream>

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
    string readWords;
    int numWords = 0;

    while(getline(birdfile, readWords)) {
        cout << readWords << endl;
        numWords++;
        cout << numWords << endl;
    }

    //Create a local string array with 100 elements
    string localWordList[100];

    //Close the file
    birdfile.close();
}
    //Destructor
    birdHouse::~birdHouse(){
        //Add code later
    }


