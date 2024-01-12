#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the values:";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw "divide by zero is not possible";
        }
        c = a / b;
        cout << "Result:" << c << endl;
    }
    catch (const char *e)
    {
        cout << "Error occured:" << e;
    }

    return 0;
}