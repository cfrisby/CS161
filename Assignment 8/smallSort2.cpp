/********************************************************************
** Author: Cuyler Frisby
** Date: 8/2/2017
** Description: This file contains a single function, smallSort2,
**              which takes the addresses of three int variables
**              and sorts the ints at those addresses into
**              ascending order.
********************************************************************/

#include <iostream>

using std::cout;
using std::endl;

void smallSort2 (int* num1, int* num2, int* num3)
{
    int temp = 0;

    if (*num1 > *num2)
    {
        temp = *num2;
	*num2 = *num1;
	*num1 = temp;
    }

    if (*num2 > *num3)
    {
        temp = *num3;
	*num3 = *num2;
	*num2 = temp;
    }

    if (*num1 > *num2)
    {
        temp = *num2;
	*num2 = *num1;
	*num1 = temp;
    }

}

/*int main()
{
    int a = 14;
    int b = -90;
    int c = 2;
    smallSort2(&a, &b, &c);
    cout << a << ", " << b << ", " << c << endl;
}*/
