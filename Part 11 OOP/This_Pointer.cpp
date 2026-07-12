#include <iostream>
using namespace std;

class Student {
private:
    int age;
    string name;

public:
    // Parameterized Constructor
    Student(string name, int age) {
        this->name = name;   // using this pointer
        this->age = age;
    }

    // Setter using this pointer
    void setData(string name, int age) {
        this->name = name;   // this->name = data member
        this->age = age;     // age = local variable
    }

    // Display function
    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Age : " << this->age  << endl;
    }
};

int main() {
    // Creating object using constructor
    Student s1("Manish", 20);

    cout << "Before updating:" << endl;
    s1.display();

    // Updating values using setter
    s1.setData("Cdt. Manish", 21);

    cout << "\nAfter updating:" << endl;
    s1.display();

    return 0;
}