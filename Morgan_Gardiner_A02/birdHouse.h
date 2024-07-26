//
// Created by morga on 2024-07-21.
//

#ifndef BIRDHOUSE_H
#define BIRDHOUSE_H

#pragma once

class birdHouse {
public:
    birdHouse (std::string Filename); //Constructor should open the file and set the wordList
    ~birdHouse(); //Destructor
    void birdHouseInstructions(); //Bird House Hangman Game Instructions
    std::string wordGenerator(); //Method to generate random word from file
    int lengthGenerator(std::string randomWord); //Method to generate length of random word
    void birdHouseGame(); //Function to start the Bird House game
    void wordGuess(); //Function to prompt user to guess full random word
    int printbirdHouse(int wrongGuess); //Method to print out parts of Bird House for each wrong answer
    std::string userGuess; //String to store the user guesses Initalize to dashes
    bool ynInput; //User input
    bool found;
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
