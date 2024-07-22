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
    string wordList;
    ifstream file;
    file.open(Filename);

    if (!file.is_open()) //check if file was opened with no errors
    {
      cout << "Error opening file";
        exit(1);
    }

    while(!file.eof())
    {
        getline(file, wordList);  //get line of text from the file
        cout << wordList << endl;
    }

    file.close();
    
}
