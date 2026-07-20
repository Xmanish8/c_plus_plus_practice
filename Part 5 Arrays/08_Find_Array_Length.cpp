/*
===========================================
        Find Array Length in C++
===========================================

Theory:
--------
The number of elements in an array can be
calculated using sizeof().

Formula:
sizeof(array) / sizeof(array[0])

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15, 20, 25};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Length = " << size;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Array Length = 5

=======================================
*/