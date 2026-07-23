/*
===========================================
      Frequency of Elements in Array
===========================================

Theory:
--------
Frequency means the number of times an
element appears in an array.

Syntax:
-------
count++;

Working:
--------
1. Traverse the array.
2. Skip already counted elements.
3. Count occurrences of every element.
4. Display the frequency.

Time Complexity:
----------------
O(n²)

Space Complexity:
-----------------
O(n)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 3, 2};

    int size = sizeof(arr) / sizeof(arr[0]);

    bool visited[7] = {false};

    for (int i = 0; i < size; i++)
    {
        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " occurs "
             << count << " times" << endl;
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

1 occurs 1 times
2 occurs 3 times
3 occurs 2 times
4 occurs 1 times

=======================================
*/