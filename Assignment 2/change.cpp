/********************************************************************
** Author: Cuyler Frisby
** Date: 7/5/2017
** Description: This program asks the user for an amount in cents
**              less than a dollar and tells the user how many of
**              each coin type will be used to provide change.
********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int cents, quarters, dimes, nickels, pennies;

    //Ask the user to input an amount in cents less than a dollar
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> cents;

    //Determine how many of each coin type will be needed to make change
    quarters = cents / 25;
    dimes = cents % 25 / 10;
    nickels = cents % 25 % 10 / 5;
    pennies = cents % 25 % 10 % 5;

    //Output the results
    cout << "Your change will be:" << endl;
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickels << endl;
    cout << "P: " << pennies << endl;

    return 0;
}
