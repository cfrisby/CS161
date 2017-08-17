/********************************************************************
** Author: Cuyler Frisby
** Date: 7/14/2017
** Description: This file contains a single function, fallDistance,
**              which returns the distance in meters than an object
**              would fall given a time in seconds.
********************************************************************/

#include <iostream>

using std::cout;
using std::endl;

const double gravity = 9.8;

double fallDistance(double seconds)
{
    double distance = 0.5 * gravity * seconds * seconds;
    return distance;
}

/*
int main()
{
    cout << fallDistance(56) << endl;
    return 0;
}
*/
