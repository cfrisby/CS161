/********************************************************************
** Author: Cuyler Frisby
** Date: 7/24/2017
** Description: This file contains a class declaration for a class
**              called Entree. The function definitions for this
**              class can be found in "Entree.cpp".
********************************************************************/

#ifndef ENTREE_HPP
#define ENTREE_HPP

#include <string>

using std::string;

class Entree
{
    private:
        string name;
	int numCalories;
    public:
	Entree();
	Entree(string, int);
	string getName();
	int getNumCalories();
};
#endif
