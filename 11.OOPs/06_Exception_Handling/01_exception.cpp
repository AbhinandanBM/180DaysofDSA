#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance, account_number;

public:
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // deposit
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " rs credited successfully\n";
        }
        else
        {
            throw "Invalid amount\n";
        }
    }

    // withdraw
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " rs debited successfully\n";
        }
        else if (amount < 0)
        {
            throw "Invalid amount\n";
        }
        else
        {
            throw "Insufficient Balance\n";
        }
    }
};

int main()
{
    Customer C1("Abhi", 10000, 123);

    try
    {
        C1.deposit(500);
        C1.withdraw(100000);
    }
    catch (const char *e)
    {
        cout << "Exception occured: " << e;
    }

    return 0;
}