/*********************************************************************
** Author: Andrew Tjossem
** Date: 7.29.2017
** Description: A function which returns the standard deviation of the
**		individuals in the Person classes.
**********************************************************************/

#include<cmath>							//included for the power and square root functions
#include "Person.hpp"

using std::pow;
using std::sqrt;

double stdDev(Person person[], int arraysize)			//function called stdDev
{
	int number = arraysize;					//number of arrays 
	double totalage = 0;
	double summation = 0;
	int index;
	
	for (index = 0; index < number; index++)		//calculates the total age to be used to find the mean
	{
		totalage += person[index].getAge();	
	}

	

	double mean = totalage / arraysize;			//age mean

	for (index = 0; index < number; index++)		//for loop to calculate the summation value in the standard deviation formula
	{
		summation += pow((person[index].getAge() - mean), 2.0);
	}

	double std = sqrt(summation / number);			//uses the mean, summation, and number of arrays to calculate standard deviation.

	return std;
}
