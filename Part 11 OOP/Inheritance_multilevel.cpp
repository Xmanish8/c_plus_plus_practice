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
    void playMusic() {
        cout << "Car music system ON" << endl;
    }
};

class SportsCar : public Car {
public:
    void turbo() {
        cout << "Turbo mode activated" << endl;
    }
};

int main() {
    SportsCar sc;
    sc.start();
    sc.playMusic();
    sc.turbo();
}
