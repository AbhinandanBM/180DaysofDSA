#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //max heap
    priority_queue<int> maxi;

    maxi.push(4);
    maxi.push(0);
    maxi.push(2);
    maxi.push(8);

    int n=maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" "<<endl;
        maxi.pop();
    }    cout<<endl;

    //min heap
    priority_queue<int,vector<int>,greater<int> > mini;

    mini.push(4);
    mini.push(0);
    mini.push(2);
    mini.push(8);

    int n1=mini.size();
    for(int i=0; i<n1; i++){
        cout<<mini.top()<<" "<<endl;
        mini.pop();
    }    cout<<endl;

    cout<<"Empty or not "<<mini.empty()<<endl;
}