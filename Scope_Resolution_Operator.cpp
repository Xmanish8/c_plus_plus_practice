/*
===========================================
      Scope Resolution Operator (::)
===========================================

Theory:
--------
The Scope Resolution Operator (::) is used to access
variables, functions, or class members that belong to
a particular scope.

Uses:
1. Access Global Variable
2. Define Member Functions Outside Class
3. Access Static Members
4. Resolve Name Conflicts

Syntax:
::variable_name

===========================================
*/

#include <iostream>
using namespace std;

// Global Variable
int number = 100;

int main()
{
    // Local Variable
    int number = 50;

    cout << "===== Scope Resolution Operator =====" << endl;

    cout << "Local Variable  : " << number << endl;
    cout << "Global Variable : " << ::number << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

===== Scope Resolution Operator =====
Local Variable  : 50
Global Variable : 100

=======================================
*/
