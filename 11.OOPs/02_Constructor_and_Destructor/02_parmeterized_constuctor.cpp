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
        account_number = 1234;
        balance = 200;
    }

    // Parameterized constructor
    Customer(string a, int b, int c)
    {
        name = a;
        account_number = b;
        balance = c;
    }

    // Constructor overloading
    Customer(string a, int b)
    {
        name = a;
        account_number = b;
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    Customer C1;
    Customer C2("Ram", 456, 10000);
    Customer C3("Jaggu", 890); // garbage value will be added to the balance

    C1.display();
    C2.display();
    C3.display();

    return 0;
}