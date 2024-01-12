#include <iostream>
using namespace std;

int main()
{

    try
    {
        int *p = new int[10000000000000];
        cout << "memory allocated successfully\n";
        delete[] p;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception occured:" << e.what() << '\n';
    }

    return 0;
}