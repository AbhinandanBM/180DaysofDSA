#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<2)
        return 0;

    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int fact(int m){
    int fact=1;
    for(int i=m;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;

    if(isPrime(a))
        cout<<"It is prime."<<endl;
    else
        cout<<"It is not prime."<<endl;

    cout<<fact(b)<<endl;

    if(isPrime(b-a))
        cout<<"It is prime."<<endl;
    else
        cout<<"It is not prime."<<endl;

    cout<<fact(b-a)<<endl;

    return 0;

}