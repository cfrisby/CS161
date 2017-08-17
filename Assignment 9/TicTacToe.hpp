/**********************************************************************
** Author: Cuyler Frisby
** Date: 8/7/2017
** Description: This file contains a class declaration for a class
**              called TicTacToe, which allows two people to play a
**              game of tic-tac-toe using the Board class. The
**              function definitions for this class can be found in
**              "TicTacToe.cpp".
**********************************************************************/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"

// TicTacToe class declaration
class TicTacToe
{
    private:
        Board gameBoard;
	char currentTurn;
    public:
        TicTacToe(char firstTurn);
	TicTacToe();
	void play();
};
#endif
