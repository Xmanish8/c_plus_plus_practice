#include <iostream>
using namespace std;

class Person {
public:
    void speak() {
        cout << "Person speaking" << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "Student is studying" << endl;
    }
};

class Athlete : public Person {
public:
    void practice() {
        cout << "Athlete is practicing" << endl;
    }
};

class ScholarAthlete : public Student, public Athlete {
public:
    void winAward() {
        cout << "Scholar Athlete won an award" << endl;
    }
};

int main() {
    ScholarAthlete sa;
    sa.winAward();

    // Note: speak() is ambiguous (diamond problem)
}
