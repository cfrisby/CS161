/************************************************************************
** Author: Cuyler Frisby
** Date: 8/7/2017
** Description: This file contains the function definitions for the
**              TicTacToe class. The declaration for this class can be
**              found in "TicTacToe.hpp". This file also includes a
**              main method which initiates a game of tic-tac-toe.
************************************************************************/

#include <iostream>
#include "TicTacToe.hpp"

using std::cout;
using std::cin;
using std::endl;

/********************************************************************
** Description: This is the default constructor for the TicTacToe class.
**              It gives the "X" player the first turn.
********************************************************************/
TicTacToe::TicTacToe()
{
    currentTurn = 'X';
}

/*************************************************************************
** Description: This is an alternate constructor for the TicTacToe class.
**              It takes a char parameter which specifies whether X or
**              O will go first.
*************************************************************************/
TicTacToe::TicTacToe(char firstTurn)
{
    currentTurn = firstTurn;
}

/***************************************************************************
** Description: This function starts the game of tic-tac-toe. The function
**              will continue looping, asking the correct player for their
**              move and sending it to the Board until someone has won or
**              it's a draw.
***************************************************************************/
void TicTacToe::play()
{
    int yCoord, xCoord;
    bool validInput = false;
    gameBoard.print();

    //Continue looping until gameBoard.gameState() returns something other than UNFINISHED
    while (gameBoard.gameState() == UNFINISHED)
        {
            validInput = false;
	    //Input validation of player's move. Continue looping until valid values are input.
	    while (validInput == false)
	    {
                cout << "Player " << currentTurn << ": Please enter your move. (row number followed by column number)" << endl;
	        cin >> yCoord >> xCoord;

	    if (yCoord <= 2 && yCoord >= 0 && xCoord <= 2 && xCoord >= 0)
	    {
	        validInput = true;
	    }
	    else
	    {
	       cout << "Invalid input. Valid values are 0, 1, or 2." << endl;
	    }
	    }
            //Check if square is taken and record move using gameBoard.makeMove
	    //If square is not taken, print board and change  value of currentGameStatus
	    if (gameBoard.makeMove(yCoord, xCoord, currentTurn))
	    {
	        gameBoard.print();
		gameStatus currentGameStatus = gameBoard.gameState();

	        if (currentGameStatus == X_WON)
	            cout << "Congratulations Player " << currentTurn << "! You have won!" << endl;

	        if (currentGameStatus == O_WON)
	            cout << "Congratulations Player " << currentTurn << "! You have won!" << endl;

                if (currentGameStatus == DRAW)
	            cout << "The game ended in a draw." << endl;

		if (currentTurn == 'X')
		    currentTurn = 'O';
		else
		    currentTurn = 'X';
            }
	    else
	    {
	        cout << "That square is already taken." << endl;
	    }


        }
}
/**************************************************************************
** Description: This is the main function. It asks the user which player
**              will go first and then begins a game of tic-tac-toe.
**************************************************************************/
int main()
{
    char firstPlayer;
    
    cout << "Welcome to Tic-Tac-Toe." << endl;
    cout << "Which player will go first? Please enter X or O." << endl;
    cin >> firstPlayer;

    if (firstPlayer == 'x' || firstPlayer =='X')
        firstPlayer = 'X';
    else if (firstPlayer == 'o' || firstPlayer =='O')
        firstPlayer = 'O';
    else
    {
        firstPlayer = 'X';
	cout << "Invalid entry. X will go first by default." << endl;
    }
       
    TicTacToe currentGame(firstPlayer);  
    currentGame.play();

}
