#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *balance;

public:
    Customer(string name, int bal)
    {
        this->name = name;
        balance = new int;
        *balance = bal;
    }

    void display()
    {
        cout << name << " " << *balance << endl;
    }

    // Destructor
    ~Customer()
    {
        delete balance;
    }
};

int main()
{
    Customer C1("Abhi", 10);

    C1.display();

    return 0;
}