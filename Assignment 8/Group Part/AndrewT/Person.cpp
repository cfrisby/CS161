/*********************************************************************
** Author: Andrew Tjossem
** Date: 7.29.2017
** Description: A Class which stores the name and age of a person
**********************************************************************/

#include "Person.hpp"
#include<string>

using std::string;

Person::Person(string nam, double ag)		//The constructor whicb takes a string and double and initializes the object
{
	name = nam;
	age = ag;
}

string Person::getName()			//a get function which returns the string value
{
	return name;
}

double Person::getAge()				//a get function which returns the double value
{
	return age;
}
