/********************************************************************
** Author: Cuyler Frisby
** Date: 7/9/2017
** Description: This program prompts the user for an integer that 
**              will be guessed. The user will then enter guesses.
**              The program wil let the user know if the guess is too
**              high or too low until the correct integer is entered.
********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int correctGuess, currentGuess, numGuesses = 1;

    //Ask the user for the number that will be guessed
    cout << "Enter the number for the player to guess." << endl;
    cin >> correctGuess;

    //Prompt the user to enter a guess
    cout << "Enter your guess." << endl;
    cin >> currentGuess;
    
    //Tell the user if the guess is too high or too low. Continue until
    //correct number is guessed.
    while (currentGuess!=correctGuess)
    {
        if (currentGuess < correctGuess)
        {
            cout << "Too low - try again." << endl;
	    numGuesses++;
	    cin >> currentGuess;
        }
	else if (currentGuess > correctGuess)
        {
            cout << "Too high - try again." << endl;
	    numGuesses++;
	    cin >> currentGuess;
        }
    }

    //Tell the user how many tries it took them to guess the correct number
    cout << "You guessed it in " << numGuesses << " tries." << endl;

   return 0; 

}
