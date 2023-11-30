#include <iostream>
using namespace std;

void fun(int **p1){
    *p1=*p1+1;
}

int main(){
    int n = 10;
    int *p = &n; //Single Pointer
    int **p2 = &p; //Double Pointer
    int ***p3 = &p2;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<p2<<endl;
    // cout<<&p2<<endl;
    // cout<<p3<<endl;

    cout<<"Before:"<<p<<endl;
    fun(p2);
    cout<<"After:"<<p<<endl;

    return 0;
}