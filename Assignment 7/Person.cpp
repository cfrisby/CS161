/**********************************************************************
** Author: Cuyler Frisby
** Date: 7/30/2017
** Description: This file contains the function definitions for the
**              Person class. The declaration for this class can be
**              found in "Person.hpp".
**********************************************************************/

#include <cmath>
#include "Person.hpp"

/***************************************************************************
** Description: This is the default constructor for the Person class. It
**              initializes age to 0 and name to an empty string.
***************************************************************************/
Person::Person()
{
    name = "";
    age = 0;
}

/************************************************************************
** Description: This is an alternate constructor for the Person class.
**              It initializes the fields to the values passed to it
**              as parameters.
************************************************************************/
Person::Person(string inputName, double inputAge)
{
    name = inputName;
    age = inputAge;
}

/********************************************************************
** Description: Get function for the name variable
********************************************************************/
string Person::getName()
{
    return name;
}

/********************************************************************
** Description: Get function for the age variable
********************************************************************/
double Person::getAge()
{
    return age;
}

