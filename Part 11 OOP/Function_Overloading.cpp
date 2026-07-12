#include <iostream>
using namespace std;

class Payment {
public:
    void pay(int amount) {
        cout << "Paid " << amount << " using cash" << endl;
    }

    void pay(string upi) {
        cout << "Paid using UPI: " << upi << endl;
    }

    void pay(string card, int cvv) {
        cout << "Paid using card: " << card << endl;
    }
};

int main() {
    Payment p;
    p.pay(500);
    p.pay("manish@upi");
    p.pay("1234-5678-9999", 123);
}
