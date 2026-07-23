/*
===========================================
         Merge Two Arrays in C++
===========================================

Theory:
--------
Merging two arrays means combining the
elements of both arrays into a single array.

Syntax:
-------
merged[index] = array[index];

Working:
--------
1. Create two arrays.
2. Create a third array having the combined
   size of both arrays.
3. Copy the first array.
4. Copy the second array.
5. Display the merged array.

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
    int arr1[] = {1, 2, 3};

    int arr2[] = {4, 5, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[6];

    // Copy first array
    for (int i = 0; i < size1; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < size2; i++)
    {
        merged[size1 + i] = arr2[i];
    }

    cout << "Merged Array:\n\n";

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Merged Array:

1 2 3 4 5 6

=======================================
*/