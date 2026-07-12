/*
===========================================
            Type Casting in C++
===========================================

Theory:
--------
Type casting is the process of converting one data type
into another data type.

Types:
1. Implicit Type Casting (Automatic)
2. Explicit Type Casting (Manual)

Syntax:
data_type(variable);

or

(data_type)variable;

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    // Implicit Type Casting
    int num = 10;
    double result = num;

    cout << "===== Implicit Type Casting =====" << endl;
    cout << "Integer Value : " << num << endl;
    cout << "Converted to Double : " << result << endl;

    // Explicit Type Casting
    double pi = 3.14159;
    int integerValue = (int)pi;

    cout << "\n===== Explicit Type Casting =====" << endl;
    cout << "Double Value : " << pi << endl;
    cout << "Converted to Integer : " << integerValue << endl;

    // Integer Division
    int a = 10, b = 3;

    cout << "\n===== Integer Division =====" << endl;
    cout << "Without Type Casting : " << a / b << endl;
    cout << "With Type Casting    : " << (float)a / b << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

===== Implicit Type Casting =====
Integer Value : 10
Converted to Double : 10

===== Explicit Type Casting =====
Double Value : 3.14159
Converted to Integer : 3

===== Integer Division =====
Without Type Casting : 3
With Type Casting    : 3.33333

=======================================
*/
