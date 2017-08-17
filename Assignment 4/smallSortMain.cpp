#include <iostream>

using std::cout;
using std::endl;

void smallSort(int& num1, int& num2, int& num3);

int main()
{
    int a = 14;
    int b = 2;
    int c = -90;
    smallSort(a, b, c);
    cout << a << ", " << b << ", " << c << endl;
}
