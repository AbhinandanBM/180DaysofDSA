#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,i=0,rem;
    long int ans=0;
    cout<<"Enter the number:";
    cin>>num;

    while(num!=0){
        rem=num%8;
        num=num/8;
        ans=(rem*pow(10,i))+ans;
        i++;
    }
    cout<<"The answer is "<<ans<<endl;
}