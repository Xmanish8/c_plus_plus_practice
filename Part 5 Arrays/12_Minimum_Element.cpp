/*
===========================================
      Minimum Element in Array
===========================================

Theory:
--------
Compare each element with the current minimum
to find the smallest value.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {45, 12, 89, 23, 67};

    int size = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Minimum Element = " << min;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Minimum Element = 12

=======================================
*/