/*
===========================================
        Array Input & Output in C++
===========================================

Theory:
--------
Elements can be stored in an array using loops
and accessed using their index.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    cout << "Enter 5 Elements:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    cout << "\nArray Elements:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Enter 5 Elements:
10
20
30
40
50

Array Elements:
10 20 30 40 50

=======================================
*/