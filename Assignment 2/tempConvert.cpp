/********************************************************************
** Author: Cuyler Frisby
** Date: 7/5/2017
** Description: This program asks the user for a temperature in
**              Celsius and converts it to Fahrenheit.
********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double celsiusTemp, fahrenheitTemp;

    //Ask the user to input a temperature in Celsius and save to variable
    cout << "Please enter a Celsius temperature." << endl;
    cin >> celsiusTemp;

    //Convert the Celsius temperature to Fahrenheit and output result
    fahrenheitTemp = 9.0 / 5 * celsiusTemp + 32;
    cout << "The equivalent Fahrenheit temperature is:" << endl;
    cout << fahrenheitTemp << endl;

    return 0;
}
