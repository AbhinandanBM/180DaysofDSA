#include<iostream>
using namespace std;

int main()
{
    int arr[10]={2,5,8};
    int *p=arr;

    cout<<"The address of the first memory location is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"The address of the first memory location is "<<&arr[0]<<endl;
    cout<<"The value at 0th location is "<<*arr<<endl;
    cout<<"Addition "<<*arr+1<<endl;
    cout<<"The value at 1st location is "<<*(arr+1)<<endl;
    cout<<p<<endl;
    cout<<*(p+1)<<endl;
    return 0;
}