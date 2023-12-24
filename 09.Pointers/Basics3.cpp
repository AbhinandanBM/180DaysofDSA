#include<iostream>
using namespace std;

int main()
{
    int temp[10]={1,2,3};
    cout<<"1st "<<sizeof(temp)<<endl;
    cout<<"2nd "<<sizeof(*temp)<<endl;
    cout<<"3rd "<<sizeof(&temp)<<endl;
    cout<<"4th "<<*temp<<endl;

    int *ptr=&temp[0];
    cout<<"5th "<<sizeof(ptr)<<endl;
    cout<<"6th "<<sizeof(*ptr)<<endl;
    cout<<"7th "<<sizeof(&ptr)<<endl;

    int i=2;
    cout<<i[temp]<<endl;


}
