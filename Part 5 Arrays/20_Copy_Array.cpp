/*
===========================================
           Copy an Array in C++
===========================================

Theory:
--------
Copying an array means storing all elements
of one array into another array of the same
size.

Syntax:
-------
copy[i] = arr[i];

Working:
--------
1. Create a destination array.
2. Traverse the original array.
3. Copy each element one by one.
4. Display the copied array.

Time Complexity:
----------------
O(n)

Space Complexity:
-----------------
O(n)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15, 20, 25};

    int size = sizeof(arr) / sizeof(arr[0]);

    int copy[5];

    // Copy elements
    for (int i = 0; i < size; i++)
    {
        copy[i] = arr[i];
    }

    cout << "Copied Array:\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << copy[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Copied Array:

5 10 15 20 25

=======================================
*/