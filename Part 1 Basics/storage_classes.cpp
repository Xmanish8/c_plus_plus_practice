/*
===========================================
          Storage Classes in C++
===========================================

Theory:
--------
Storage classes define the lifetime, visibility,
and memory location of variables.

Types:
1. auto      (Default local variable)
2. register  (Suggests CPU register storage)
3. static    (Retains value between function calls)
4. extern    (Declares global variable)

===========================================
*/

#include <iostream>
using namespace std;

// Global Variable
int globalVar = 100;

void counter()
{
    static int count = 0;
    count++;

    cout << "Counter Value : " << count << endl;
}

int main()
{
    auto int x = 10;
    register int y = 20;

    cout << "===== Storage Classes =====" << endl;

    cout << "Auto Variable     : " << x << endl;
    cout << "Register Variable : " << y << endl;
    cout << "Global Variable   : " << globalVar << endl;

    cout << "\nStatic Variable Demonstration\n";

    counter();
    counter();
    counter();

    return 0;
}

/*
============ SAMPLE OUTPUT ============

===== Storage Classes =====
Auto Variable     : 10
Register Variable : 20
Global Variable   : 100

Static Variable Demonstration

Counter Value : 1
Counter Value : 2
Counter Value : 3

=======================================
*/
