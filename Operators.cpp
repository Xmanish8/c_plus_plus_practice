/*
===========================================
            Operators in C++
===========================================

Types of Operators:
-------------------
1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Assignment Operators
5. Increment & Decrement Operators

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    cout << "===== Arithmetic Operators =====" << endl;
    cout << "Addition       : " << a + b << endl;
    cout << "Subtraction    : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    cout << "Division       : " << a / b << endl;
    cout << "Modulus        : " << a % b << endl;

    cout << "\n===== Relational Operators =====" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;

    cout << "\n===== Logical Operators =====" << endl;
    cout << "(a > b && b > 0) : " << (a > b && b > 0) << endl;
    cout << "(a < b || b > 0) : " << (a < b || b > 0) << endl;
    cout << "!(a > b)         : " << !(a > b) << endl;

    cout << "\n===== Increment & Decrement =====" << endl;

    int x = 10;

    cout << "Initial Value : " << x << endl;
    cout << "Post Increment: " << x++ << endl;
    cout << "After Post    : " << x << endl;
    cout << "Pre Increment : " << ++x << endl;
    cout << "Post Decrement: " << x-- << endl;
    cout << "After Post    : " << x << endl;
    cout << "Pre Decrement : " << --x << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

===== Arithmetic Operators =====
Addition       : 15
Subtraction    : 5
Multiplication : 50
Division       : 2
Modulus        : 0

===== Relational Operators =====
a == b : 0
a != b : 1
a > b  : 1
a < b  : 0

===== Logical Operators =====
(a > b && b > 0) : 1
(a < b || b > 0) : 1
!(a > b)         : 0

===== Increment & Decrement =====
Initial Value : 10
Post Increment: 10
After Post    : 11
Pre Increment : 12
Post Decrement: 12
After Post    : 11
Pre Decrement : 10

=======================================
*/
