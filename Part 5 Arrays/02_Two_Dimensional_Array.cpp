/*
===========================================
        Two-Dimensional Array in C++
===========================================

Theory:
--------
A two-dimensional array stores data in rows
and columns, similar to a matrix.

Syntax:
data_type array[rows][columns];

Example:
int matrix[2][3];

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int matrix[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "2D Array:\n\n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

2D Array:

1 2 3
4 5 6

=======================================
*/