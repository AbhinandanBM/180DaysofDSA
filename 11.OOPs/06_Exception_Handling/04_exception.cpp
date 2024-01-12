#include <iostream>
using namespace std;

class InsufficientBalanceerror : public runtime_error
{
public:
    InsufficientBalanceerror(const string &msg) : runtime_error(msg)
    {
    }
};

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
            throw runtime_error("Invalid amount\n");
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
            throw runtime_error("Invalid amount\n");
        }
        else
        {
            throw InsufficientBalanceerror("Insufficient Balance\n");
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
    catch (const InsufficientBalanceerror &e)
    {
        cout << "Exception occured: " << e.what() << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Exception occured: " << e.what() << endl;
    }
    catch (...) // default catch block
    {
        cout << "Exception occured: " << endl;
    }

    return 0;
}