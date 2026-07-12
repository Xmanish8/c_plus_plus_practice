/*
===========================================
      User Defined Data Types in C++
===========================================

Theory:
--------
C++ allows programmers to create their own data types.

Types:
1. class
2. struct
3. union
4. enum

===========================================
*/

#include <iostream>
using namespace std;

// Structure
struct Student
{
    int rollNo;
    string name;
};

// Union
union Data
{
    int integerValue;
    char character;
};

// Enumeration
enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    Student s1;
    s1.rollNo = 101;
    s1.name = "Manish";

    Data d;
    d.integerValue = 50;

    Day today = Friday;

    cout << "===== User Defined Data Types =====" << endl;

    cout << "\nStructure" << endl;
    cout << "Roll No : " << s1.rollNo << endl;
    cout << "Name    : " << s1.name << endl;

    cout << "\nUnion" << endl;
    cout << "Integer Value : " << d.integerValue << endl;

    cout << "\nEnumeration" << endl;
    cout << "Friday Index : " << today << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

===== User Defined Data Types =====

Structure
Roll No : 101
Name    : Manish

Union
Integer Value : 50

Enumeration
Friday Index : 4

=======================================
*/
