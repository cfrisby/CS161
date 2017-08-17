#include "Taxicab.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Taxicab cab1;
    Taxicab cab2(5,-8);

    cout << "Taxicab 1 Position: (" << cab1.getXCoord() << ", " << cab1.getYCoord() << ")" << endl;
    cout << "Taxicab 2 Position: (" << cab2.getXCoord() << ", " << cab2.getYCoord() << ")" << endl;

    cout << "Taxicab 1 Distance Traveled: " << cab1.getDistanceTraveled() << endl;
    cout << "Taxicab 2 Distance Traveled: " << cab2.getDistanceTraveled() << endl;

    cab1.moveX(3);
    cab1.moveY(-4);
    cab1.moveX(-1);

    cout << "Taxicab 1 Position: (" << cab1.getXCoord() << ", " << cab1.getYCoord() << ")" << endl;
    cout << "Taxicab 1 Distance Traveled: " << cab1.getDistanceTraveled() << endl;

    cab2.moveY(7);

    cout << "Taxicab 2 Position: (" << cab2.getXCoord() << ", " << cab2.getYCoord() << ")" << endl;
    cout << "Taxicab 2 Distance Traveled: " << cab2.getDistanceTraveled() << endl;
}
