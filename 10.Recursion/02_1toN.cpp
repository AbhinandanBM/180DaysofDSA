#include<iostream>
using namespace std;

void print(int num , int N){
    //base condition
    if(num == N){
        cout<<num;
        return;
    }

    cout<<num<<endl;
    print(num+1,N);
}


void print1(int N){
    if(N==1){
        cout<<N<<endl;
        return;
    }
    print1(N-1);
    cout<<N<<endl;
}


int main(){
    int N;
    cout<<"Enter the end number:";
    cin>>N;

    // print(1,N);

    print1(N);

    return 0;
}