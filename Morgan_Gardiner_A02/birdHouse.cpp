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
    cout << "\n";
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
        //Test: read/output all words from the file
       //cout << readWords[NumWords] << endl;
        NumWords++;
    }

    /*Test to print total number of words read from the file
    cout << "Number of words read from the file: " << NumWords << endl;*/

    //Create string array and allocate correct number of words read from file into array
    wordList = new string[NumWords];

    //Copy words from the temporary string array readWords into wordList array
    copy(readWords,readWords + NumWords, wordList);

    /*Test if copying to wordlist worked
    for(i=0; i<numWords; i++)
    {
        cout << wordList[i] << endl;
    }
    //Test output number of words
    cout << numWords;*/

    //Close the file
    birdfile.close();

    //Initalise variables
    numGuess = 8;

    //Initalise variable to keep track of number of wrong user guesses
    wrongGuess = 0;

    //Initalise ynInput
    ynInput = false;

    //Initalise uInput
    uInput = '\0';

    //Initialise randomWord variable
    randomWord = wordGenerator();

    //Random length test
    randwordLength = lengthGenerator(randomWord);

}

void birdHouse::birdHouseInstructions()
{
    //Game Instructions
    cout <<endl;
    cout << "********************************" << endl;
    cout << "GAME INSTRUCTIONS: " << endl;
    cout << "The game will generate a random word from the provided text file and output the number of letters in that word. " << endl;
    cout << "Each turn you have a chance to guess a letter from that word." << endl;
    cout << "Each incorrect guess will generate a part of the bird house. You have 8 chances." << endl;
    cout << "Once the full bird house appears, you lose." << endl;
    cout << "Each turn you will have a chance to try and guess the full word." << endl;
    cout << "If you guess the right word you win. If you guess wrong it's game over." << endl;
    cout << "If you guess all of the letters of the random word throughout your turns, you win." << endl;
    cout << "GOOD LUCK!" << endl;
    cout << "********************************" << endl;
}

string birdHouse::wordGenerator()
{
    //Seed random number generator with time
    srand(time(nullptr));
    int i = rand() % NumWords;
    return wordList[i];
}

int birdHouse::lengthGenerator(const string& randomWord)
{
    wordLength = randomWord.length();
    return wordLength;
}

void birdHouse::birdHouseGame()
{
    //Output
    cout << endl;
    cout << "The length of your random word is: " << randwordLength <<endl;

    //Initalize userGuess to '-' and depending on length of random word
    string userGuess (randwordLength, '-');
    cout << "Random word:" << userGuess << endl;

    //Loop through while user still has guesses leftover
    while (numGuess > 0 && userGuess != randomWord)
    {
        //Prompt user input
        cout << "Enter a letter below: " << endl;
        cin >> uInput;

        //Boolean operator for if letter is found
        found = false;

        //Loop through the string to see if user guessed letter is found
        for (int i = 0; i < randomWord.size(); i++)
        {
            if (randomWord[i] == uInput) {
                userGuess[i] = uInput;
                found = true;
            }
        }

            if (found == true) {
                cout << userGuess << endl;
                cout << "Yay! You guessed a letter correctly" << endl;;
            }
            else
            {
                cout << "Uh oh. Your letter was not found. Try again" << endl;
                //Decrement number of user guesses and increment number of wrong user guesses
                numGuess --;
                wrongGuess++;
                //Call method to print portion of bird house
                printbirdHouse();
            }

            //Call word guess method to see if user would like to take a chance to guess full word
            wordGuess();

            //Conditional statement for if userGuess is the same as random word
            if (userGuess == randomWord)
            {
                cout << "Wow!!! You guessed the word! Congratulations." <<endl;
                cout << "     ^      ^   " << endl;
                cout << "         *       " << endl;
                cout << R"(      \_____/   )" << endl;
                cout << R"(   YOU WIN !!! )" << endl;
                return;
            }

            //Conditional statement for if user runs out of guesses
            if (numGuess == 0)
            {
                cout << "Oh no!! You're out of guesses" << endl;
                cout << "The random word was: " << randomWord << endl;
                cout << "YOU LOSE :(" << endl;
               return;
            }
        }

    }

void birdHouse::wordGuess()
{
    //Ask user after each guess if they would like to guess the whole word
    cout << "Would you like to try guessing the word? 1 = YES, 0 = NO " <<endl;
    cin >> ynInput;

    if (ynInput == 1)
    {
        cout << "Take a chance and guess the full word below: "<< endl;
        cin >> guessInput;

        if (guessInput == randomWord)
        {
            cout << "Wow!!! You guessed the word! Congratulations." <<endl;
            cout << "     ^      ^   " << endl;
            cout << "         *       " << endl;
            cout << R"(      \_____/   )" << endl;
            cout << R"(   YOU WIN !!! )" << endl;
            exit(0);
        }
        else
        {
            cout << "Oh no. Your guess was not a match. You lose. "<< endl;
            cout << "        |    " << endl;
            cout << "        |    " << endl;
            cout << R"(       / \   )" << endl;
            cout << R"(      /   \)" << endl;
            cout << R"(     /     \)" << endl;
            cout << R"(    /       \)" << endl;
            cout << "   ----------- " << endl;
            cout << "   <         > " << endl;
            cout << "   <    0    > " << endl;
            cout << "    --------- " << endl;
            cout << "    GAME OVER :(   " << endl;
           exit(0);
        }
    }
}

int birdHouse::printbirdHouse()
{
//Print out part of birdhouse each wrong guess
    switch(wrongGuess)
    {
    case 1:
        cout << " | " << endl;
        cout << " | " << endl;
        break;
    case 2:
        cout << " | " << endl;
        cout << " | " << endl;
        cout << R"(  \ )" << endl;
        cout << R"(   \ )" << endl;
        cout << R"(    \ )" << endl;
        break;
    case 3:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(       / \   )" << endl;
        cout << R"(      /   \)" << endl;
        cout << R"(     /     \)" << endl;
        cout << R"(    /       \)" << endl;
        break;
    case 4:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(       / \   )" << endl;
        cout << R"(      /   \)" << endl;
        cout << R"(     /     \)" << endl;
        cout << R"(    /       \)" << endl;
        cout << "   ----------- " << endl;
        break;
    case 5:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(       / \   )" << endl;
        cout << R"(      /   \)" << endl;
        cout << R"(     /     \)" << endl;
        cout << R"(    /       \)" << endl;
        cout << "   ----------- " << endl;
        cout << "  <    " << endl;
        cout << "  <     " << endl;
        break;
    case 6:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(       / \   )" << endl;
        cout << R"(      /   \)" << endl;
        cout << R"(     /     \)" << endl;
        cout << R"(    /       \)" << endl;
        cout << "   ----------- " << endl;
        cout << "   <         > " << endl;
        cout << "   <         > " << endl;
        break;
    case 7:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(       / \   )" << endl;
        cout << R"(      /   \)" << endl;
        cout << R"(     /     \)" << endl;
        cout << R"(    /       \)" << endl;
        cout << "   ----------- " << endl;
        cout << "   <         > " << endl;
        cout << "   <    0    > " << endl;
        break;
    case 8:
        cout << "        |    " << endl;
        cout << "        |    " << endl;
        cout << R"(       / \   )" << endl;
        cout << R"(      /   \)" << endl;
        cout << R"(     /     \)" << endl;
        cout << R"(    /       \)" << endl;
        cout << "   ----------- " << endl;
        cout << "   <         > " << endl;
        cout << "   <    0    > " << endl;
        cout << "    --------- " << endl;
        cout << "    GAME OVER :(   " << endl;
        break;
    default:
        cout << "Error " << endl;
        break;
    }
    return 0;
}

birdHouse::~birdHouse(){
    //Free memory using delete[]
        delete[]wordList;
    }


