#include<iostream>
using namespace std;

int main(){
    int num,power,n;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Enter the power:";
    cin>>power;

    n=num;
    for(int i=1;i<power;i++){
        num=num*n;
    }
    cout<<num;
}