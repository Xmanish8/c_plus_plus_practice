#include <iostream>
using namespace std;

class BankAccount {
public:
    void openAccount() {
        cout << "Account opened" << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    void addInterest() {
        cout << "Interest added" << endl;
    }
};

class CurrentAccount : public BankAccount {
public:
    void enableOverdraft() {
        cout << "Overdraft enabled" << endl;
    }
};

int main() {
    SavingsAccount s;
    CurrentAccount c;

    s.openAccount();
    s.addInterest();

    c.openAccount();
    c.enableOverdraft();
}
