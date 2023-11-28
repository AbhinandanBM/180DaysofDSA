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
    cout<<"4th "<<sizeof(ptr)<<endl;
    cout<<"4th "<<sizeof(*ptr)<<endl;
    cout<<"4th "<<sizeof(&ptr)<<endl;

    int i=3;
    cout<<i[temp]<<endl;


}
