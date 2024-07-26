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
    void birdHouseInstructions();
    std::string wordGenerator();
    int lengthGenerator(std::string randomWord);
    void birdHouseGame();
    void wordGuess();
    void printbirdHouse();
    std::string userGuess; //String to store the user guesses Initalize to dashes
    char ynInput;
private:
    std::string* wordList; //list of words read from the file
    std::string randomWord; //A random word from the list
    unsigned short int NumWords; //Number of words read from the file
    unsigned short int numGuess; //Current number of user guesses
    unsigned short int wrongGuess; //Number of wrong guesses
    char uInput; //user input
    unsigned short int wordLength; //Variable to store the length of the random word to guess
};



#endif //BIRDHOUSE_H
