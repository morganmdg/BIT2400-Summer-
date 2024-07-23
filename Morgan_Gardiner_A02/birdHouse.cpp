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

    //Create a local string array with 100 elements
    string localWordList[100];

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

    //Read and output text
    while(!birdfile.eof())
    {
        int i;
        for (i =0; i<100; i++)
        {
            getline(birdfile, localWordList[i]);
            cout << localWordList[i] << endl;
            int getArrayLength = sizeof(localWordList) / sizeof(string);
            cout << getArrayLength;

        }
    }

    //Close the file
    birdfile.close();

}

//Destructor
birdHouse::~birdHouse()
{
//Add code later
}
