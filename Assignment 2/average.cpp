/********************************************************************
** Author: Cuyler Frisby
** Date: 7/5/2017
** Description: This program asks the user for five numbers and
**              prints the average of those numbers
********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double number1, number2, number3, number4, number5, average;

    //Ask the user for five numbers and save to variables
    cout << "Please enter five numbers." << endl;
    cin >> number1 >> number2 >> number3 >> number4 >> number5;

    //Calculate the average of the five numbers and output result
    average = (number1 + number2 + number3 + number4 + number5) / 5;
    cout << "The average of those numbers is:" << endl;
    cout << average << endl;

    return 0;
}
