#include<iostream>
#include<math.h>
using namespace std;

int count(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

bool armstrong(int num, int digits){
    int ans=0, rem, n=num;
    while(n){
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,digits);
    }

    if(ans==num)
    return 1;
    else
    return 0;
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int digits=count(num);
    // cout<<armstrong(num,digits)<<endl;
    if(armstrong(num, digits)){
        cout<<"Number is armstrong."<<endl;
    }    
    else{
        cout<<"Number is not armstrong."<<endl;
    }
        

    return 0;
}