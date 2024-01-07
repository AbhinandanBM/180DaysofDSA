#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number, balance;
    static int total_count;
    static int total_balance;

public:
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_count++;
        total_balance += balance;
    }

    // static member function
    static void access_static()
    {
        cout << "Total Number of Customers: " << total_count << endl;
        cout << "Total Balance: " << total_balance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
        else
        {
            cout << "Deposit valid amount" << endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            total_balance -= amount;
        }
        else
        {
            cout << "Withdrawl is not possible" << endl;
        }
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

// static data memeber intialization
int Customer::total_count = 0;
int Customer::total_balance = 0;

int main()
{
    Customer C1("Raj", 1, 1000);
    Customer C2("Shan", 3, 20000);

    C1.deposit(800);
    C2.withdraw(500);

    C1.display();
    C2.display();

    Customer::access_static();

    return 0;
}