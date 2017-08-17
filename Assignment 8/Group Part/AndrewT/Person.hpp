/*********************************************************************
** Author: Andrew Tjossem
** Date: 7.29.2017
** Description: A header file for the Person Class
**********************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP
#include<string>

using std::string;

class Person				//creates a class called Person which stores a name and age
{
	private:
		string name;
		double age;
	public:
		Person(string nam, double ag);	//constructor which takes a string and double to initialize the object.
		string getName();		//a function to return the name value
		double getAge();		//a function to return the age value
};

#endif 
