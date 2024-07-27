//
// Created by morga on 2024-07-21.
//

#ifndef BIRDHOUSE_H
#define BIRDHOUSE_H

#pragma once

class birdHouse {
public:
    explicit birdHouse (std::string Filename); //Constructor should open the file and set the wordList
    ~birdHouse(); //Destructor
    static void birdHouseInstructions(); //Bird House Hangman Game Instructions
    std::string wordGenerator(); //Method to generate random word from file each game
    int lengthGenerator(const std::string& randomWord); //Method to generate length of random word
    void birdHouseGame(); //Function to play the Bird House game
    void wordGuess(); //Function to prompt user to try and guess full random word
    int printbirdHouse(); //Method to print out parts of bird house for each wrong answer
    std::string userGuess; //String to store the user guesses/ initalized to dashes
    bool ynInput; //User input 0 or 1 to guess full word
    bool found; //T/F if letter is found in random word string
    std::string guessInput; //Full word guess input
    int randwordLength; //Length of random word
private:
    std::string* wordList; //list of words read from the file
    std::string randomWord; //A random word from the list
    unsigned short int NumWords; //Number of words read from the file
    unsigned short int numGuess; //Current number of user guesses
    unsigned short int wrongGuess; //Number of wrong guesses
    char uInput; //User input
    unsigned short int wordLength; //Variable to store the length of the random word to guess
};

#endif //BIRDHOUSE_H
