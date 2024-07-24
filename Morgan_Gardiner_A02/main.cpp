#include <fstream>
#include <iostream>
#include <string>
#include "birdHouse.h"
#include <time.h>
#include <math.h>

using namespace std;

int main()
{

    //Welcome message
    cout << "Welcome to the Hangman Game!" << endl;

    //Create string for user input and file extension
    string inputStr;
    string extensionStr = ".txt";

    //Take user input and put in inputStr
    cout << "Please enter the name of the file you want to read the list of words from: " << endl;
    getline (cin, inputStr);

    //Create filename by concatenating filename + extension
    string filename = inputStr + extensionStr;

    //Execute opening/reading file
    birdHouse startbirdHouse(filename);

    //Random word test
    string randomWord = startbirdHouse.wordGenerator();
    cout << "Your random word is: " << randomWord << endl;

    cout << "The game will randomly generate a word and provide you with the length of that word" << endl;
    cout << "You have eight guesses to guess all of the letters from the word" << endl;
    cout << "Each incorrect guess will generate sections of the birdsnest" << endl;

    //Random length test
    int randwordLength = startbirdHouse.lengthGenerator(randomWord);
    cout << "The length of your random word is: " << randwordLength <<endl;


    //Initalize userGuess to - depending on length of random word
    string userGuess (randwordLength, '-');
    cout << userGuess;


    //If position not null return position of letter or prompt user to try again
    int i;
    for(i=0; i<8; i++)
    {
        //Prompt user input
        cout << "Enter a letter below: " << endl;
        char uInput;
        cin >> uInput;

        //Find the letter in the string
        int position = randomWord.find(uInput);

        //Loop to check if guessed word is found at _ position
        if(position >= NULL )
        {
            cout << "Your letter was located at position " << position <<endl;
            userGuess[position] = uInput;
            cout << userGuess << endl;
            cout << "Yay! You got a word. Guess again :)" << endl;;
        }
        else
        {
            cout << "Uh oh. Try again" << endl;
        }
    }
}
