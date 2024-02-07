#include <iostream>
#include <stack>
using namespace std;
// Stack implementation through STL
// internal implementation through deque

int main()
{
    stack<int> S;
    // Push
    S.push(3);
    S.push(45);
    S.push(90);

    // Size
    cout << S.size() << endl;

    // Peek
    cout << S.top() << endl;

    // Pop
    S.pop();
    cout << S.size() << endl;
    cout << S.top() << endl;

    // isEmpty
    cout << S.empty() << endl;

    return 0;
}