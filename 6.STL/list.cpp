#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" "<<endl;
    }

    l.erase(l.begin());
    cout<<"After erase "<<l.size()<<endl;
    for(int i:l){
        cout<<i<<" "<<endl;
    }
}