/******************************************************************** 
** Author: Ailish Bateman
** Date: 7/30/17
** Description: This function takes two parameters, an array of Person
** objects and the size of the array. It returns the standard deviation
** of the ages of the people in the Person objects.
*********************************************************************/ 
#include <iostream>
#include <string>
#include <cmath>
#include "Person.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

double stdDev(Person personArray[], int SIZE)
{
  double sum = 0;
  double mean;
  double sumSqDiff = 0;
  double variance;
  double stdDevCalc;
  
  //In order to calc mean, calculate sum of all elements:
  for (int i = 0; i < SIZE; i++) 
    sum += personArray[i].getAge();
  
  //Next calculate mean:
  mean = sum / SIZE;
  
  //Then, for each element, calculate the difference from
  //mean, square that, and add it to a running total
  //of the square differences:
  for (int i = 0; i < SIZE; i++) 
    sumSqDiff += pow((personArray[i].getAge() - mean), 2);
  
  //Calculate the variance (the average of the squared differences)
  variance = sumSqDiff / SIZE;
  
  //Finally, calculate the standard deviation, the square root
  //of the variance.
  stdDevCalc = sqrt(variance);

  return stdDevCalc;
}