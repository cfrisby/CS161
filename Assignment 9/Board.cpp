/********************************************************************
** Author: Cuyler Frisby
** Date: 8/7/2017
** Description: This file contains the function definitions for the
**              Board class. The declaration for this class can be
**              found in "Board.hpp".
********************************************************************/

#include <iostream>
#include "Board.hpp"

using std::cout;
using std::endl;

/********************************************************************
** Description: This is the default constructor for the Board class.
**              It initializes an "empty" 3x3 array representing the
**              tic-tac-toe board.
********************************************************************/
Board::Board()
{
    for (int row = 0; row < 3; row++)
    {   
        for (int col = 0; col < 3; col++)
	{    
            moves[row][col] = '.';
        }
    }
}

/***************************************************************************
** Description: This function takes the x and y coordinates of the move
**              and which player's turn it is as parameters. If the
**              location is unoccupied, makeMove will record the move and
**              return true. If the location is already occupied, makeMove
**              will return false.
***************************************************************************/
bool Board::makeMove(int yCoord, int xCoord, char currentTurn)
{
    if (moves[yCoord][xCoord] == '.')
    {
        moves[yCoord][xCoord] = currentTurn;
	return true;
    }
    else
    {
        return false;
    }
}

/**************************************************************************
** Description: This function returns the current state of the game from
**              one of the following options: X_WON, 0_WON, DRAW, or
**              UNFINISHED. The enum data type "gameStatus" is used as
**              the return type.
**************************************************************************/
gameStatus Board::gameState()
{
    gameStatus currentStatus = DRAW;
    int xCounter;
    int oCounter;
    int emptyCounter = 0;

    //Check for empty spaces (unfinished game)
    for (int row = 0; row < 3; row++)
    {   
	for (int col = 0; col < 3; col++)
	{    
            if (moves[row][col] == '.')
	        emptyCounter++;
        }

        if (emptyCounter > 0)
	{
            currentStatus = UNFINISHED;
	}

    }

    //Check for horizontal tic-tac-toes
    for (int row = 0; row < 3; row++)
    {   
        xCounter = 0;
	oCounter = 0;
	for (int col = 0; col < 3; col++)
	{    
            if (moves[row][col] == 'X')
	        xCounter++;
	    else if(moves[row][col] == 'O')
		oCounter++;
        }

        if (xCounter == 3)
	    currentStatus = X_WON;
	else if (oCounter == 3)
            currentStatus = O_WON;
    }

    //Check for vertical tic-tac-toes
    for (int col = 0; col < 3; col++)
    {   
        xCounter = 0;
	oCounter = 0;
	for (int row = 0; row < 3; row++)
	{    
            if (moves[row][col] == 'X')
	        xCounter++;
	    else if(moves[row][col] == 'O')
		oCounter++;
        }
	
	if (xCounter == 3)
	    currentStatus = X_WON;
	else if (oCounter == 3)
	    currentStatus = O_WON;
    }

    //Check for diagonal tic-tac-toes
    xCounter = 0;
    oCounter = 0;
    for (int col = 0; col < 3; col++)
    {   
        if (moves[col][col] == 'X')
	    xCounter++;
	else if(moves[col][col] == 'O')
	    oCounter++;
    }

    if (xCounter == 3)
        currentStatus = X_WON;
    else if (oCounter == 3)
	currentStatus = O_WON;

    xCounter = 0;
    oCounter = 0;
    int row = 2;
    for (int col = 0; col < 3; col++)
    {   
        if (moves[row][col] == 'X')
	    xCounter++;
	else if(moves[row][col] == 'O')
            oCounter++;

	row--;
    }

    if (xCounter == 3)
        currentStatus = X_WON;
    else if (oCounter == 3)
	currentStatus = O_WON;
	   
    //Return current status of game 
    return currentStatus;
}

/**************************************************************************
** Description: This function prints the contents of the Board object to
**              display the status of the tic-tac-toe game.
**************************************************************************/
void Board::print()
{
    cout << endl;
    cout << "  0 1 2" << endl;
    cout << "0 " << moves[0][0] << " " << moves[0][1] << " " << moves[0][2] << endl;
    cout << "1 " << moves[1][0] << " " << moves[1][1] << " " << moves[1][2] << endl;
    cout << "2 " << moves[2][0] << " " << moves[2][1] << " " << moves[2][2] << endl;
    cout << endl;
}
