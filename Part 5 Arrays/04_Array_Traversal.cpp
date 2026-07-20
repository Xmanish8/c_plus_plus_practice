/*
===========================================
          Array Traversal in C++
===========================================

Theory:
--------
Traversal means visiting each element
of an array exactly once.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {15, 25, 35, 45, 55};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Traversing Array:\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i << " = " << numbers[i] << endl;
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Traversing Array:

Element 0 = 15
Element 1 = 25
Element 2 = 35
Element 3 = 45
Element 4 = 55

=======================================
*/