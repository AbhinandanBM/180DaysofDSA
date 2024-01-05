#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

public:
    Customer()
    {
        name = "Abhi";
        account_number = 576;
        balance = 20000;
    }

    // Copy constructor
    Customer(Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    Customer C1;
    Customer C2(C1);
    Customer C3;

    C3 = C1;

    C1.display();
    C2.display();
    C3.display();

    return 0;
}