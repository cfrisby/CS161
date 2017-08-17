/********************************************************************
** Author: Cuyler Frisby
** Date: 7/30/2017
** Description: This file contains a class declaration for a class
**              called Person. The function definitions for this
**              class can be found in "Person.cpp".
********************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

using std::string;

class Person
{
    private:
        string name;
	double age;
    public:
	Person();
	Person(string, double);
	string getName();
	double getAge();
};
#endif
