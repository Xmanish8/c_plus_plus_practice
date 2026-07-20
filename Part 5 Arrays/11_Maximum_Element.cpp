/*
===========================================
      Maximum Element in Array
===========================================

Theory:
--------
Compare each element with the current maximum
to find the largest value.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {45, 12, 89, 23, 67};

    int size = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum Element = " << max;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Maximum Element = 89

=======================================
*/