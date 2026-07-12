#include<iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent show" << endl;
    }
};

class Child : public Parent {
public:
    void show() {   // overriding
        cout << "Child show" << endl;
    }
};
int main(){
    Parent p1;
    p1.show();
    Child c1;
    c1.show();
}