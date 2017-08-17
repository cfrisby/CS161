/********************************************************************
** Author: Cuyler Frisby
** Date: 7/14/2017
** Description: This file contains a single function, hailstone,
**              which takes a positive integer, performs a hailstone
**              sequence on the integer, and returns the number of
**              steps it takes to reach a value of 1.
********************************************************************/

#include <iostream>

using std::cout;
using std::endl;

int hailstone (int num)
{
    int counter = 0;

    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
	    counter++;
        }
        else
        {
            num = num * 3 + 1;
	    counter++;
        }
    }

    return counter;
}

/*
int main()
{
    cout << hailstone(3) << endl;
}
*/
