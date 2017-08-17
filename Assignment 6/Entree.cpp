/**********************************************************************
** Author: Cuyler Frisby
** Date: 7/24/2017
** Description: This file contains the function definitions for the
**              Entree class. The declaration for this class can be
**              found in "Entree.hpp".
**********************************************************************/

#include <string>
#include "Entree.hpp"

using std::string;

/***************************************************************************
** Description: This is the default constructor for the Entree class. It
**              initializes the name variable to an empty string and the
**              numCalories variable to 0.
***************************************************************************/
Entree::Entree()
{
    name = "";
    numCalories = 0;
}

/************************************************************************
** Description: This is an alternate constructor for the Entree class.
**              It initializes the fields to the values passed to it
**              as parameters.
************************************************************************/
Entree::Entree(string entreeName, int calCount)
{
    name = entreeName;
    numCalories = calCount;
}

/********************************************************************
** Description: Get function for the name variable
********************************************************************/
string Entree::getName()
{
    return name;
}

/********************************************************************
** Description: Get function for the numCalories variable
********************************************************************/
int Entree::getNumCalories()
{
    return numCalories;
}
