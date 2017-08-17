/**********************************************************************
** Author: Cuyler Frisby
** Date: 8/7/2017
** Description: This file contains a class declaration for a class
**              called Board, which represents a tic-tac-toe board.
**              The function definitions for this class
**              can be found in "Board.cpp". This file also includes
**              the definition of an enum data type called gameState.
**********************************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

//enum definition for game state
enum gameStatus {X_WON, O_WON, DRAW, UNFINISHED};

// Board class declaration
class Board
{
    private:
        char moves[3][3];
    public:
        Board();
	bool makeMove (int yCoord, int xCoord, char currentTurn);
	gameStatus gameState();
	void print();
};
#endif
