/********************************************************************
** Author: Cuyler Frisby
** Date: 7/30/2017
** Description: This file contains a single function, findMedian,
**              which takes two parameters - an array of int and
**              the size of the array - and returns the median of
**              the array.
********************************************************************/

#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::sort;

double findMedian (int array[], int size)
{
    //Sort the array in ascending numeric order
    sort(array, array + size);

    //Determine if size of array is odd or even and calculate median
    if (size % 2 == 0)
    {
        return (array[size/2] + array[(size/2)-1]) / 2.0;
    }
    else
    {
        return (array[size/2]);
    }

}

/*
int main()
{
    int set1[] = {0,-9,5456,12,99,4598,-12,-3554,-120,9987,456,98,55,-987};
    int size1 = 14;
    int set2[] = {56,-87,12,36,99,123,0,45,987,-5456,12};
    int size2 = 11;

    cout << findMedian(set1, size1) << endl;
    cout << findMedian (set2, size2) << endl;
}
*/
