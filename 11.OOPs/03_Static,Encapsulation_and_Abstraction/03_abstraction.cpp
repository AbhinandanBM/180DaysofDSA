#include <iostream>

class Account {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    Account myAccount;
    myAccount.deposit(100.0);
    std::cout << "Account balance: " << myAccount.getBalance() << std::endl;
    return 0;
}
