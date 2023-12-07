#include<iostream>
using namespace std;


void printeven(int num, int N){
    if(num > N){
        return;
    }

    cout<<num<<endl;
    printeven(num+2,N);
}


void printeven1(int N){
    if(N == 2){
        cout<<N<<endl;
        return;
    }

    printeven1(N-2);
    cout<<N<<endl;
}

int main(){
    int N;
    cout<<"Enter the end number:";
    cin>>N;

    // printeven(2,N);

    if(N%2 == 1){
        N--;
    }
    printeven1(N);

    return 0;
}