/**************************************************************************
** Author: Cuyler Frisby
** Date: 7/24/2017
** Description: This file contains the function definitions for the
**              EntreeSampler class. The declaration for this class can be
**              found in "EntreeSampler.hpp".
**************************************************************************/

#include <iostream>
#include "EntreeSampler.hpp"

using std::cout;
using std::endl;

/***************************************************************************
** Description: This is the constructor for the Entree class. It receives
**              4 Entree objects as parameters and assigns them to its
**              variables of the Entree data type.
***************************************************************************/
EntreeSampler::EntreeSampler(Entree entr1, Entree entr2, Entree entr3, Entree entr4)
{
    entree1 = entr1;
    entree2 = entr2;
    entree3 = entr3;
    entree4 = entr4;
}

/********************************************************************
** Description: This function lists the names of the 4 Entrees
**              in the EntreeSampler.
********************************************************************/
void EntreeSampler::listEntrees()
{
    cout << entree1.getName() << endl;
    cout << entree2.getName() << endl;
    cout << entree3.getName() << endl;
    cout << entree4.getName() << endl;
}

/********************************************************************
** Description: This function returns the total number of calories
**              of the Entrees included in the EntreeSampler.
********************************************************************/
int EntreeSampler::totalCalories()
{
    return entree1.getNumCalories() + entree2.getNumCalories() + entree3.getNumCalories() + entree4.getNumCalories();
}
