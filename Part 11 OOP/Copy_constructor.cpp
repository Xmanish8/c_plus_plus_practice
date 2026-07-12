#include <iostream>
#include <string>
using namespace std;

class Manish {
public:
    int age;

    Manish(int a) 
    { age = a;
}

    Manish(Manish &s) {
        age = s.age;
    }
    void manu(){
        cout<<"m1age : "<<age<<endl;
}
    void manum(){

        cout<<"m2age : "<<age<<endl;
}
};


int main() {
    Manish m1(20);
    m1.manu();
    Manish m2(m1);
    m2.manum();
    return 0;
}