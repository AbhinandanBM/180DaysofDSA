#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number that you want to print the table :";
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}