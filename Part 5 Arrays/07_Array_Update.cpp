/*
===========================================
          Array Update in C++
===========================================

Theory:
--------
Updating means replacing an existing element
with a new value.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int position = 3;
    int newValue = 100;

    arr[position] = newValue;

    cout << "Updated Array:\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Updated Array:

10 20 30 100 50

=======================================
*/