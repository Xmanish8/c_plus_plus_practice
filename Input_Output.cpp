/*
===========================================
        Input & Output in C++
===========================================

Theory:
--------
Input is taken using 'cin'.
Output is displayed using 'cout'.

Operators:
>>  Extraction Operator (Input)
<<  Insertion Operator (Output)

===========================================
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\n===== User Details =====" << endl;
    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Enter your name: Manish
Enter your age: 20

===== User Details =====
Name : Manish
Age  : 20

=======================================
*/
