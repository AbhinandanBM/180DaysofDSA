#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    char ch[6]="abcde";

    int *ptr=&arr[0];
    cout<<"->"<<ptr<<endl;

    char *c=&ch[0];
    cout<<"->"<<c<<endl;

    // If you want to print the address of char type then
    cout<<(void*)c<<endl;
    cout<<(void*)ch<<endl;
    cout<<static_cast<void*>(ch)<<endl;

    char temp='z';
    char *p=&temp;
    cout<<"->"<<p<<endl;//It will print untill find null value
    cout<<(void*)p<<endl;
}