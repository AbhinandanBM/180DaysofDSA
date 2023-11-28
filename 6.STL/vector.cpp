#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //create vector,declare
    vector<int> v;
    //size and capacity
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"Capacity of v:"<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(4);
    v.push_back(10);
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"Capacity of v:"<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" "; 
    v.pop_back();
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"Capacity of v:"<<v.capacity()<<endl;
    //delete an element
    v.erase(v.begin()+1);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" "; 
    v.push_back(23);
    v.push_back(42);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" "; 
    v.insert(v.begin()+1,10);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" "; 
}