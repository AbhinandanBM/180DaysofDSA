#include <iostream>
using namespace std;

/*
 -> It's a special keyword that holds the address of the current object within a member function.
 -> It's an implicit pointer, meaning it's automatically passed to all non-static member functions when they're called.
 -> It's a constant pointer, so you can't change its value.
 */

class Customer
{
    string name;
    int account_number;
    int balance;

public:
    // Parameterized constructor
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    Customer C2("Ram", 456, 10000);

    C2.display();

    return 0;
}