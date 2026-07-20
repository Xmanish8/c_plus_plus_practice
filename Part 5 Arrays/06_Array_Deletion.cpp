/*
===========================================
          Array Deletion in C++
===========================================

Theory:
--------
Deletion removes an element from a specified
position by shifting the remaining elements
one position to the left.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int position = 2;

    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "Array After Deletion:\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Array After Deletion:

10 20 40 50

=======================================
*/