/*
===========================================
            Sum of Array Elements
===========================================

Theory:
--------
Traverse the array and add each element
to calculate the total sum.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "Sum = " << sum;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Sum = 150

=======================================
*/