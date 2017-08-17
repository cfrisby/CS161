/********************************************************************
** Author: Cuyler Frisby
** Date: 7/20/2017
** Description: This file contains the function definitions for the
**              Taxicab class. The declaration for this class can be
**              found in "Taxicab.hpp".
********************************************************************/

#include "Taxicab.hpp"
#include <stdlib.h>

/********************************************************************
** Description: This is the default constructor for the Taxicab class.
**              It initializes all fields to a default value of 0.
********************************************************************/
Taxicab::Taxicab()
{
    xCoord = yCoord = distanceTraveled = 0;
}

/**********************************************************************
** Description: This is an alternate constructor for the Taxicab class.
**              It initializes the xCoord and yCoord variables to the
**              values passed to it as parameters.
**********************************************************************/
Taxicab::Taxicab(int x, int y)
{
    xCoord = x;
    yCoord = y;
    distanceTraveled = 0;
}

/********************************************************************
** Description: Get function for the xCoord variable
********************************************************************/
int Taxicab::getXCoord()
{
    return xCoord;
}

/********************************************************************
** Description: Get function for the yCoord variable
********************************************************************/
int Taxicab::getYCoord()
{
    return yCoord;
}

/********************************************************************
** Description: Get function for the distanceTraveled variable
********************************************************************/
int Taxicab::getDistanceTraveled()
{
    return distanceTraveled;
}


/**************************************************************************
** Description: This function "moves" the Taxicab object to a new
**              location by changing the value of the yCoord variable.
**              The distance traveled is recorded in the distanceTraveled
**              variable.
**************************************************************************/
void Taxicab::moveY(int y)
{
    distanceTraveled = distanceTraveled + abs (y);
    yCoord = yCoord + y;
}

/**************************************************************************
** Description: This function "moves" the Taxicab object to a new
**              location by changing the value of the yCoord variable.
**              The distance traveled is recorded in the distanceTraveled
**              variable.
**************************************************************************/
void Taxicab::moveX(int x)
{
    distanceTraveled = distanceTraveled + abs (x);
    xCoord = xCoord + x;
}
