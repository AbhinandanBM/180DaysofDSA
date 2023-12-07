#include<iostream>
using namespace std;

int fact(int n){
    // Base case
    if(n==1 || n==0){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    if(n<0){
        cout<<"Factorial is not possible"<<endl;
        return 0;
    }

    cout<<fact(n)<<endl;

    return 0;
}