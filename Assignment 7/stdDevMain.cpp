#include "Person.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    double stdDev(Person persons[], int size);

    Person set1[] = {Person("Frank", 25), Person("Jared", 67.2), Person("Cuyler", 28.9)};
    int size1 = 3;

    Person set2[] = {Person("Frank", 25), Person("Jared", 67.2), Person("Cuyler", 28.9), Person("Meghan", 29.6), Person("Beckett", 1.1), Person("Franklin", 55.5), Person("Theodore", 45.8), Person("Paco", 21.1), Person("Monty", 15.7), Person("Philbert", 6.4), Person("David", 97.6), Person("Geronimo", 33.3), Person("Porkchop", 100.1)};
    int size2 = 13;

    cout << "StdDev 1: " << stdDev(set1, size1) << endl;
    cout << "StdDev 2: " << stdDev(set2, size2) << endl;

    for (int i=0; i < size2; i++)
        cout << set2[i].getName() << endl;
}
