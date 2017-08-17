/********************************************************************
** Author: Cuyler Frisby
** Date: 7/9/2017
** Description: This program asks the user how many integers they
**              would like to enter. After all the numbers have
**              been entered, the program displays the largest
**              and the smallest of those numbers.
********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int numInt, minInt, maxInt, currentInt;

    //Ask the user how many integers they would like to enter
    cout << "How many integers would you like to enter?" << endl;
    cin >> numInt;

    //Set the value of the min and max variables to the first entered integer
    cout << "Please enter " << numInt << " integer(s)." << endl;
    cin >> minInt;
    maxInt = minInt;

    //Loop through the remaining integers and compare each to min and max
    for (int num = 1; num <= (numInt - 1); num++)
    {
        cin >> currentInt;
        if (currentInt > maxInt)
            maxInt = currentInt;
        if (currentInt < minInt)
            minInt = currentInt;
    }

    //Output the results
    cout << "min: " << minInt << endl;
    cout << "max: " << maxInt << endl;

    return 0;
}
