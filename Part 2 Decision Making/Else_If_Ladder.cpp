/*
===========================================
          else-if Ladder
===========================================

Theory:
--------
The else-if ladder is used when multiple conditions
need to be checked one after another.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter Marks: ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade : A";
    }
    else if (marks >= 75)
    {
        cout << "Grade : B";
    }
    else if (marks >= 60)
    {
        cout << "Grade : C";
    }
    else if (marks >= 40)
    {
        cout << "Grade : D";
    }
    else
    {
        cout << "Result : Fail";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Enter Marks: 82

Grade : B

=======================================
*/
