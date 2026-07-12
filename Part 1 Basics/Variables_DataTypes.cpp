/*
===========================================
        Variables & Data Types in C++
===========================================

Theory:
--------
A variable is a named memory location used to store data.
Every variable has a specific data type that determines
the kind of value it can store.

Common Data Types:
1. int      -> Integer values
2. float    -> Decimal values (single precision)
3. double   -> Decimal values (double precision)
4. char     -> Single character
5. bool     -> True or False
6. string   -> Sequence of characters

Syntax:
data_type variable_name = value;

Example:
int age = 20;

===========================================
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Integer
    int age = 20;

    // Floating Point
    float percentage = 89.75;

    // Double Precision
    double pi = 3.14159265359;

    // Character
    char grade = 'A';

    // Boolean
    bool isStudent = true;

    // String
    string name = "Manish";

    cout << "===== Variables & Data Types =====" << endl;

    cout << "Name       : " << name << endl;
    cout << "Age        : " << age << endl;
    cout << "Percentage : " << percentage << endl;
    cout << "Value of PI: " << pi << endl;
    cout << "Grade      : " << grade << endl;
    cout << "Student    : " << isStudent << endl;

    return 0;
}

/*
============ OUTPUT ============

===== Variables & Data Types =====
Name       : Manish
Age        : 20
Percentage : 89.75
Value of PI: 3.14159
Grade      : A
Student    : 1

=================================
*/
