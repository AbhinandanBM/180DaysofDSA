#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // implementing the queue using stl
    queue<int> q;

    // Push into the queue
    q.push(56);
    q.push(45);
    q.push(60);

    // Pop from the queue
    q.pop();

    // front of the queue
    cout << q.front() << endl;

    // back of the queue
    cout << q.back() << endl;

    // empty
    cout << q.empty() << endl;

    // size of the queue
    cout << q.size() << endl;

    return 0;
}