/***********************************************************************
** Author: Cuyler Frisby
** Date: 7/24/2017
** Description: This file contains a class declaration for a class
**              called EntreeSampler. The function definitions for this
**              class can be found in "EntreeSampler.cpp".
***********************************************************************/

#ifndef ENTREESAMPLER_HPP
#define ENTREESAMPLER_HPP

#include "Entree.hpp"

class EntreeSampler
{
    private:
        Entree entree1, entree2, entree3, entree4;
    public:
	EntreeSampler(Entree, Entree, Entree, Entree);
	void listEntrees();
	int totalCalories();
};
#endif
