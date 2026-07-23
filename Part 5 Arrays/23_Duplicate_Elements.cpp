/*
===========================================
      Find Duplicate Elements in Array
===========================================

Theory:
--------
Duplicate elements are values that appear
more than once in an array.

Syntax:
-------
if(arr[i] == arr[j])

Working:
--------
1. Compare every element with all remaining
   elements.
2. If a match is found, print it.
3. Avoid printing the same duplicate twice.

Time Complexity:
----------------
O(n²)

Space Complexity:
-----------------
O(1)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate Elements:\n\n";

    for (int i = 0; i < size; i++)
    {
        bool printed = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                printed = true;
                break;
            }
        }

        if (printed)
            continue;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << endl;
                break;
            }
        }
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Duplicate Elements:

1
2

=======================================
*/