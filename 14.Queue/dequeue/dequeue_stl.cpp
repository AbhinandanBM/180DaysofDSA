#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(12);
    d.push_back(34);
    d.push_front(89);
    d.push_front(23);
    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_back();
    d.pop_front();
    cout << d.front() << endl;
    cout << d.back() << endl;

    return 0;
}