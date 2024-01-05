#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

public:
    // default constructor
    // Customer(){
    //     cout<<"constructor is called during object creation"<<endl;
    // }

    Customer()
    {
        name = "Abhi";
        account_number = 123;
        balance = 100;
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    Customer C1;
    C1.display();

    return 0;
}