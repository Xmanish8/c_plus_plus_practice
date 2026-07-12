#include <iostream>
#include <string>
using namespace std;

class Manish {

public:
    Manish(string n, int a){
        name=n;
        age=a;
    }

    string name;
    int age;

    void manu(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
}

};

int main() {
    Manish m1("Manish" , 20);
    m1.manu();
    return 0;
}