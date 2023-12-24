#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int *p;
    p=&i;
    cout<<"The Address of i is "<<p<<endl;
    cout<<"The value point by pointer is "<<*p<<endl;
    cout<<"The Address of pointer variable is "<<&p<<endl;
    // cout<<p++<<endl;
    cout<<(*p)+1<<endl;

    return 0;
}