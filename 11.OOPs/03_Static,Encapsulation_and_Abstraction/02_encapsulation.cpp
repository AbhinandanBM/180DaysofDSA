#include <iostream>

class Account {
private:
    double balance;  // Data member is private

public:
    // Constructor to initialize balance
    Account(double initialBalance = 0.0) {
        balance = initialBalance;
    }

    // Public methods to access and modify balance
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited " << amount << ", new balance: " << balance << std::endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrew " << amount << ", new balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient funds" << std::endl;
        }
    }

    double getBalance() const {  // Getter method to read balance
        return balance;
    }
};

int main() {
    Account myAccount(1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    std::cout << "Current balance: " << myAccount.getBalance() << std::endl;
    return 0;
}