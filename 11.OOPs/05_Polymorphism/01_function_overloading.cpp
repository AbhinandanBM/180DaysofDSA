#include <iostream>
using namespace std;

class Area
{
public:
    int areacalc(int r)
    {
        return 3.14 * r * r;
    }
    int areacalc(int l, int b)
    {
        return l * b;
    }
};

int main()
{
    Area A1, A2;
    cout << A1.areacalc(4) << endl;
    cout << A2.areacalc(3, 4) << endl;

    return 0;
}