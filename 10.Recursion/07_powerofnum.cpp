#include<iostream>
using namespace std;

int power(int num,int n){
    if(n==0)
        return 1;
    if(n==1)
        return num;

    return num*power(num,n-1);
}

int main(){
    int n,num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Enter the power:";
    cin>>n;

    cout<<power(num,n);

    return 0;
}