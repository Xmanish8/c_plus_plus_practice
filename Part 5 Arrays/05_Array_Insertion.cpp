/*
===========================================
          Array Insertion in C++
===========================================

Theory:
--------
Insertion means adding a new element
at a specified position in the array.

Steps:
1. Shift elements to the right.
2. Insert the new element.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    int position = 2;
    int value = 25;

    for (int i = size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    size++;

    cout << "Array After Insertion:\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Array After Insertion:

10 20 25 30 40 50

=======================================
*/