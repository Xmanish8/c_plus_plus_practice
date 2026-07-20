/*
===========================================
        Average of Array Elements
===========================================

Theory:
--------
Average = Sum of Elements / Number of Elements

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

    float average = (float)sum / size;

    cout << "Average = " << average;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Average = 30

=======================================
*/