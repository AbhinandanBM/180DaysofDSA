#include<iostream>
using namespace std;

int sumofsqr(int n){
    if(n==1)
        return 1;

    return (n*n)+sumofsqr(n-1);
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    cout<<sumofsqr(n);

    return 0;
}