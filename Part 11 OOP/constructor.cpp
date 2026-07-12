#include <iostream>
#include <string>
using namespace std;

class Manish {
    
string name;

public:
    Manish(string name) : name(name) {
    }

    void manu(){
        cout<<"name "<<name;
}

};

int main() {
    Manish m1("Manish");
    m1.manu();
    return 0;
}