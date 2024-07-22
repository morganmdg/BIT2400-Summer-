//
// Created by morga on 2024-07-21.
//

#include <iostream>
#include <string>
#include "birdHouse.h"

#include <fstream>

using namespace std;

birdHouse::birdHouse(std::string Filename)
{
    string wordList;  //string that will hold data read from file
    ifstream birdfile;  //creating an object of ifstream
    birdfile.open(Filename); //open file for reading

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
