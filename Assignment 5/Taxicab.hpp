/********************************************************************
** Author: Cuyler Frisby
** Date: 7/20/2017
** Description: This file contains a class declaration for a class
**              called Taxicab. The function definitions for this class
**              can be found in "Taxicab.cpp".
********************************************************************/

#ifndef TAXICAB_H
#define TAXICAB_H

// Taxicab class declaration
class Taxicab
{
    private:
        int xCoord;
	int yCoord;
	int distanceTraveled;
    public:
        Taxicab();
	Taxicab(int x, int y);
	int getXCoord();
	int getYCoord();
	int getDistanceTraveled();
	void moveX(int);
	void moveY(int);
};
#endif
