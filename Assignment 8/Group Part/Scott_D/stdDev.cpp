/*************
**Author: Scott Dick
**Date: 7/30/2017
**Description: This function takes in two parameters. Using an
array of persons and size of array. It then returns the standard
deviation of all the ages.
*************/
#include <iostream>
#include <cmath>
using namespace std;
#include "Person.hpp"

//parameters array of persons and size of array.
double stdDev(Person array[], int size) {
	double calStdDev = 0;
	double sum = 0;
	double mean;

	for (int i = 0; i < size; ++i)
	{
		sum += array[i];
	}
	mean = sum / size;
	for (int i = 0; i <size; ++i)
	{
		calStdDev += pow(array[i] - mean, 2);
	}
	return sqrt(calStdDev/size);
}

