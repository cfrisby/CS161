/********************************************************************
** Author: Cuyler Frisby
** Date: 8/2/2017
** Description: This file contains a single function, repeatArray,
**              which takes two parameters - a reference to a
**              pointer to a dynamically allocated array of doubles
**              and the size of that array. The function replaces
**              the array with one that is twice as large, with the
**              values from the orginal array appearing twice.
********************************************************************/

#include <iostream>

using std::cout;
using std::endl;

void repeatArray (double* &array, int size)
{
    double tempArray[size];

    for (int i=0; i<size; i++)
        tempArray[i] = array[i];

    delete []array;
    
    array = new double[size*2];

    for (int i=0; i<size; i++)
        array[i] = tempArray[i];

    for (int i=size; i<size*2; i++)
        array[i] = tempArray[i-size];
}

/*
int main()
{
    double* myArray = new double[3];
    for (int i=0; i<3; i++)
        myArray[i] = (i+1)*2;

    repeatArray(myArray, 3);

    for (int i=0; i<6; i++)
        cout << myArray[i] << endl;

    delete []myArray;
}*/
