/**********
**Author: Scott Dick
**Date: 7/30/2017
**Description: Header of the data members and methods for 
Person.cpp that takes in a name and age, as well as 
getName and getAge.
**********/
#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>
class Person
{
private:
	string name;
	double age;
public:
	Person(string, double);
	string getName();
	double getAge();
};


#endif // !PERSON_HPP