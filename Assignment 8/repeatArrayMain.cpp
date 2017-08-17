#include <iostream>

using std::cout;
using std::endl;

void repeatArray(double* &array, int size);

int main()
{
    double* myArray = new double[10];
    for (int i=0; i<10; i++)
        myArray[i] = (i+3)*8;

    repeatArray(myArray, 10);

    for (int i=0; i<20; i++)
        cout << myArray[i] << endl;

    delete []myArray;
}
