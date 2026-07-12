#include <iostream>
using namespace std;

class Distance {
public:
    int meter;

    Distance(int m) {
        meter = m;
    }

    // Operator overloading
    Distance operator + (Distance d) {
        return Distance(meter + d.meter);
    }
};

int main() {
    Distance d1(10), d2(20);
    Distance d3 = d1 + d2;   // operator overloading in action

    cout << "Total: " << d3.meter;
}
