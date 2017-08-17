/**********************************************************************
** Author: Cuyler Frisby
** Date: 7/24/2017
** Description: This file contains the function definitions for the
**              Quadratic class. The declaration for this class can be
**              found in "Quadratic.hpp".
**********************************************************************/

#include <cmath>
#include "Quadratic.hpp"

/***************************************************************************
** Description: This is the default constructor for the Quadratic class. It
**              initializes all fields to a default value of 1.
***************************************************************************/
Quadratic::Quadratic()
{
    a = b = c = 1.0;
}

/************************************************************************
** Description: This is an alternate constructor for the Quadratic class.
**              It initializes the fields to the values passed to it
**              as parameters.
************************************************************************/
Quadratic::Quadratic(double varA, double varB, double varC)
{
    setA(varA);
    setB(varB);
    setC(varC);
}

/********************************************************************
** Description: Get function for the a variable
********************************************************************/
double Quadratic::getA()
{
    return a;
}

/********************************************************************
** Description: Get function for the b variable
********************************************************************/
double Quadratic::getB()
{
    return b;
}

/********************************************************************
** Description: Get function for the c variable
********************************************************************/
double Quadratic::getC()
{
    return c;
}

/********************************************************************
** Description: Set function for the a variable
********************************************************************/
void Quadratic::setA(double varA)
{
    a = varA;
}

/********************************************************************
** Description: Set function for the b variable
********************************************************************/
void Quadratic::setB(double varB)
{
    b = varB;
}

/********************************************************************
** Description: Set function for the c variable
********************************************************************/
void Quadratic::setC(double varC)
{
    c = varC;
}

/**********************************************************************
** Description: This function evaluates the quadratic function for
**              a given value of X.
**********************************************************************/
double Quadratic::valueFor(double x)
{
    return a * pow(x, 2) + b * x + c;
}


/****************************************************************************
** Description: This function returns the number of real roots for the
**              Quadratic object.
****************************************************************************/
int Quadratic::numRealRoots()
{
    int numRoots;
    double discriminant = pow(b, 2) - 4 * a * c;

    if (fabs(discriminant) <= 0.00001)
        numRoots = 1;
    else if (discriminant > 0)
	numRoots = 2;
    else if (discriminant < 0)
	numRoots = 0;

    return numRoots;
}
