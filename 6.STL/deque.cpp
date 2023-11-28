#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<d.empty()<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
}