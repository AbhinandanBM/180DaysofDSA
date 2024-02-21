#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(9);
    q.push(2);
    q.push(6);

    // Brute force Approach
    // while (q.size())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    // without deleting the queue elements O(n) Approach
    // vector<int> ans;
    // while (q.size())
    // {
    //     cout << q.front() << " ";
    //     ans.push_back(q.front());
    //     q.pop();
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     q.push(ans[i]);
    // }

    // O(1) Approach
    int n = q.size();

    while (n--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }

    cout << "\nSize:" << q.size();

    return 0;
}