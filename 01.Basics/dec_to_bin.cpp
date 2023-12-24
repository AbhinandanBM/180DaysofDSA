#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,rem,i=0;
    long int ans=0;
    cout<<"Enter the number:";
    cin>>num;

    while(num>0){

        rem=num&1;
        num=num>>1;
        ans=(rem * pow(10,i))+ans;
        i++;
    }
    cout<<"The answer is "<<ans<<endl;
    return 0;
}