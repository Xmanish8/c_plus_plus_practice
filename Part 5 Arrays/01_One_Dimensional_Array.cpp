/*
===========================================
        One-Dimensional Array in C++
===========================================

Theory:
--------
An array is a collection of elements of the same
data type stored in contiguous memory locations.

A one-dimensional array stores elements in a single row.

Syntax:
data_type array_name[size];

Example:
int numbers[5];

Indexing:
First element  -> 0
Second element -> 1
...
Last element   -> size - 1

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Array Elements:\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Array Elements:

10 20 30 40 50

=======================================
*/