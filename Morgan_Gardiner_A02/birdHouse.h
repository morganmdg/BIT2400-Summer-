//
// Created by morga on 2024-07-21.
//

#ifndef BIRDHOUSE_H
#define BIRDHOUSE_H

#pragma once

class birdHouse {
public:
    birdHouse (std::string Filename); //Constructor should open the file and set the wordList
    ~birdHouse();
    std::string wordGenerator();
    int lengthGenerator(std::string randomWord);
    std::string userGuess; //String to store the user guesses Initalize to dashes
    void userGuesses();
private:
    std::string* wordList; //list of words read from the file
    std::string randomWord; //A random word from the list
    unsigned short int NumWords; //Number of words read from the file
    unsigned short int numGuess; //Current number of user guesses
    char uInput; //user input
    unsigned short int wordLength; //Variable to store the length of the random word to guess
};



#endif //BIRDHOUSE_H
