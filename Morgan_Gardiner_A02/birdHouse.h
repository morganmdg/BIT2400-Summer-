//
// Created by morga on 2024-07-21.
//

#ifndef BIRDHOUSE_H
#define BIRDHOUSE_H

#pragma once

class birdHouse {
public:
    birdHouse (string Filename); //Constructor should open the file and set the wordList
    ~birdHouse();
    string userGuess; //String to store the user guesses Initalize to dashes
private:
    string* wordList; //list of words read from the file
    string randomWord; //A random word from the list
    usigned short int NumWords; //Number of words read from the file
    unsigned short int numGuess; //Current number of user guesses
    char uInput; //user input
    unsigned short int wordLength; //Variable to store the length of the random word to guess
};



#endif //BIRDHOUSE_H
