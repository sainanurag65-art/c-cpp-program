#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display() {
        cout << "Current Balance = " << balance << endl;
    }
};

int main() {
    BankAccount b;

    b.setBalance(1000);

    b.deposit(500);

    b.withdraw(300);

    b.display();

    return 0;
}