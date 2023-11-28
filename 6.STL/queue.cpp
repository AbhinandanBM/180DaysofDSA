#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("foo");
    q.push("bar");
    q.push("baz");

    cout<<"The front of the queue is "<<q.front()<<endl;
    cout<<"The size of the queue is "<<q.size()<<endl;
}