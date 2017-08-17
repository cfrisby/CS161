#include <iostream>

using std::cout;
using std::endl;

void smallSort2(int* num1, int* num2, int* num3);

int main()
{
    int a = 0;
    int b = 14;
    int c = -9999;
    smallSort2(&a, &b, &c);
    cout << a << ", " << b << ", " << c << endl;
}
