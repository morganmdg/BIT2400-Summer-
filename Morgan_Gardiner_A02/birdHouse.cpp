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

    //Create local string array[100]
    string readWords[100];

    //Read/count words from file and output
    int numWords = 0;
    int i;
    while(numWords< 100 && (getline(birdfile, readWords[numWords]))) {
        cout << readWords[numWords] << endl;
        numWords++;
    }

    //Print total number of words read from the file
    cout << "Number of words read from the file: " << numWords << endl;

    //Create string array and allocate number of words read from file into array
    string* wordList = new string[numWords];

    //Copy words from the temporary string array to wordList array
    copy(readWords,readWords+numWords, wordList);

    /*Test if copying to wordlist worked
    for(i=0; i<numWords; i++)
    {
        cout << wordList[i] << endl;
    }

    cout << numWords;*/

    //Close the file
    birdfile.close();
}
    //Destructor
    birdHouse::~birdHouse(){
        //Add code later

    }


