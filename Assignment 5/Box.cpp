/********************************************************************
** Author: Cuyler Frisby
** Date: 7/20/2017
** Description: This file contains the function definitions for the
**              Box class. The declaration for this class can be
**              found in "Box.hpp".
********************************************************************/

#include "Box.hpp"
#include <iostream>

using std::cout;
using std::endl;

/********************************************************************
** Description: This is the default constructor for the Box class. It
**              initializes all fields to a default value of 1.
********************************************************************/
Box::Box()
{
    height = width = length = 1.0;
}

/********************************************************************
** Description: This is an alternate constructor for the Box class.
**              It initializes the fields to the values passed to it
**              as parameters. If an invalid parameter is passed to
**              the constructor, it will initialize that field to 1.
********************************************************************/
Box::Box(double h, double w, double l)
{
    if (h >= 0)
        setHeight(h);
    else
    {
	setHeight(1);
        cout << "All fields must be >= 0. Invalid height initialized to a value of 1." << endl;
    }

    if (w >= 0)
        setWidth(w);
    else
    {
	setWidth(1);
        cout << "All fields must be >= 0. Invalid width initialized to a value of 1." << endl;
    }

    if (l >= 0)
        setLength(l);
    else
    {
	setLength(1);
        cout << "All fields must be >= 0. Invalid length initialized to a value of 1." << endl;
    }
}

/********************************************************************
** Description: Set function for the height variable
********************************************************************/
bool Box::setHeight(double h)
{
    bool validData = true;
    
    if (h >= 0)
        height = h;
    else
	validData = false;

    return validData;
}

/********************************************************************
** Description: Set function for the width variable
********************************************************************/
bool Box::setWidth(double w)
{
    bool validData = true;
    
    if (w >= 0)
        width = w;
    else
	validData = false;

    return validData;
}

/********************************************************************
** Description: Set function for the length variable
********************************************************************/
bool Box::setLength(double l)
{
    bool validData = true;
    
    if (l >= 0)
        length = l;
    else
	validData = false;

    return validData;
}

/**********************************************************************
** Description: This function calculates the volume of the Box object.
**********************************************************************/
double Box::calcVolume()
{
    return height * width * length;
}


/****************************************************************************
** Description: This function calculates the surface area of the Box object.
****************************************************************************/
double Box::calcSurfaceArea()
{
    return 2 * (height * width + height * length + width * length);
}
