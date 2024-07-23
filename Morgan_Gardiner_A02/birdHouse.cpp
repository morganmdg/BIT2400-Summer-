//
// Created by morga on 2024-07-21.
//

#include <iostream>
#include <string>
#include "birdHouse.h"

#include <fstream>
#include <algorithm>
#include <ctime>
#include <cmath>

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

    //Read/count words from file and input into readWords array
    NumWords = 0;
    while(NumWords< 100 && (getline(birdfile, readWords[NumWords]))) {
        cout << readWords[NumWords] << endl;
        NumWords++;
    }

    /*Test to print total number of words read from the file
    cout << "Number of words read from the file: " << NumWords << endl;*/

    //Create string array and allocate correct number of words read from file into array
    wordList = new string[NumWords];

    //Copy words from the temporary string array readWords into wordList array
    copy(readWords,readWords+NumWords, wordList);

    /*Test if copying to wordlist worked
    for(i=0; i<numWords; i++)
    {
        cout << wordList[i] << endl;
    }
    //Test output number of words
    cout << numWords;*/

    //Close the file
    birdfile.close();
}

string birdHouse::wordGenerator()
{
    //Seed random number generator with time
    srand(time(nullptr));
    int i = rand() % NumWords;
    string randomWord = wordList[i];

    /*Test output random word
    cout << randomWord;*/

   return randomWord;
}

int birdHouse::lengthGenerator(string randomWord)
{
    //Determine word length and set variable
    int wordLength = randomWord.length();
    return wordLength;
}

void userGuesses()
{
    int i = 0;

    for(i=0; i<8; i++)
    {


    }
}


//Destructor should free the memory allocated to wordList and set all other values to 0
birdHouse::~birdHouse(){
        delete[]wordList;
    }


