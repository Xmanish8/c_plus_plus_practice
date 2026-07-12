/*
===========================================
            Constants in C++
===========================================

Theory:
--------
A constant is a value that cannot be changed during
program execution.

Keyword:
const

Syntax:
const data_type variable = value;

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14159;
    const int DAYS_IN_WEEK = 7;

    cout << "===== Constants =====" << endl;
    cout << "Value of PI : " << PI << endl;
    cout << "Days in Week : " << DAYS_IN_WEEK << endl;

    // PI = 5.5;  // Error: Cannot modify a constant

    return 0;
}

/*
============ SAMPLE OUTPUT ============

===== Constants =====
Value of PI : 3.14159
Days in Week : 7

=======================================
*/
