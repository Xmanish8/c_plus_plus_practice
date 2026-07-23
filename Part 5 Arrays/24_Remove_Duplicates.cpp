/*
===========================================
     Remove Duplicate Elements in Array
===========================================

Theory:
--------
Removing duplicates means printing or storing
only unique elements from an array.

Syntax:
-------
if(arr[i] == arr[j])

Working:
--------
1. Traverse the array.
2. Compare the current element with all
   previous elements.
3. If already present, skip it.
4. Otherwise, print the element.

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
    int arr[] = {1, 2, 2, 3, 4, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Without Duplicates:\n\n";

    for (int i = 0; i < size; i++)
    {
        bool duplicate = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Array Without Duplicates:

1 2 3 4 5

=======================================
*/