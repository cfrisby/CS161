/********************************************************************
** Author: Cuyler Frisby
** Date: 7/30/2017
** Description: This file contains a single function, stdDev,
**              which takes two parameters - an array of Person
**              objects and the size of the array - and returns the
**              population standard deviation of the ages of the 
**              array of Persons.
********************************************************************/

#include <cmath>
#include "Person.hpp"

using std::pow;

double stdDev(Person persons[], int size)
{
    //Calculate the mean of all ages in persons[]
    double totalAge = 0;

    for (int i=0; i < size; i++)
    {
        totalAge = totalAge + persons[i].getAge();
    }

    double meanAge = totalAge / size;

    //Calculate the numerator of the variance
    double numerator = 0;

    for (int i=0; i < size; i++)
    {
        numerator = numerator + pow((persons[i].getAge() - meanAge), 2);
    }

    //Return the population standard deviation
    return pow(numerator / size, 0.5);
}
