#include "Box.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Box box1(2.4, 7.1, 5.0);
    Box box2;

    double volume1 = box1.calcVolume();
    double surfaceArea1 = box1.calcSurfaceArea();

    double volume2 = box2.calcVolume();
    double surfaceArea2 = box2.calcSurfaceArea();

    cout << "Box 1 volume: " << volume1 << endl;
    cout << "Box 1 surface area: " << surfaceArea1 << endl;
    cout << endl;
    cout << "Box 2 volume: " << volume2 << endl;
    cout << "Box 2 surface area: " << surfaceArea2 << endl;

    box2.setHeight(5.0);

    volume2 = box2.calcVolume();
    surfaceArea2 = box2.calcSurfaceArea();

    cout << endl;
    cout << "Box 2 volume: " << volume2 << endl;
    cout << "Box 2 surface area: " << surfaceArea2 << endl;

    box2.setWidth(5.0);

    volume2 = box2.calcVolume();
    surfaceArea2 = box2.calcSurfaceArea();

    cout << endl;
    cout << "Box 2 volume: " << volume2 << endl;
    cout << "Box 2 surface area: " << surfaceArea2 << endl;

    box2.setLength(5.0);

    volume2 = box2.calcVolume();
    surfaceArea2 = box2.calcSurfaceArea();

    cout << endl;
    cout << "Box 2 volume: " << volume2 << endl;
    cout << "Box 2 surface area: " << surfaceArea2 << endl;
}
