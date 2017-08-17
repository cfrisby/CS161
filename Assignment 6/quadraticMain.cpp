#include "Quadratic.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Quadratic quad1(1, 2, 1);
    cout << "quad 1 A: " << quad1.getA() << endl;
    cout << "quad 1 B: " << quad1.getB() << endl;
    cout << "quad 1 C: " << quad1.getC() << endl;

    cout << "quad 1 value for 7: " << quad1.valueFor(-2.33) << endl;
    cout << "quad 1 num real roots: " << quad1.numRealRoots() << endl;

    Quadratic quad2;
    cout << "quad 2 A: " << quad2.getA() << endl;
    cout << "quad 2 B: " << quad2.getB() << endl;
    cout << "quad 2 C: " << quad2.getC() << endl;

    quad2.setA(-5.5);
    quad2.setB(2.7);
    quad2.setC(1.01);

    cout << "quad 2 A: " << quad2.getA() << endl;
    cout << "quad 2 B: " << quad2.getB() << endl;
    cout << "quad 2 C: " << quad2.getC() << endl;

    cout << "quad 2 value for -7: " << quad2.valueFor(8.8) << endl;
    cout << "quad 2 num real roots: " << quad2.numRealRoots() << endl;
}
