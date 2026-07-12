#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {  
public:
    void openDoor() {
        cout << "Car door opened" << endl;
    }
};

int main() {
    Car c;
    c.start();      // inherited from Vehicle
    c.openDoor();   // own function
    return 0; 
}
