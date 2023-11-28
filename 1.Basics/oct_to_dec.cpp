#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,rem,i=0;
    int ans=0;
    cout<<"Enter the number:";
    cin>>num;

    while(num!=0){
        rem=num%10;
        num=num/10;
        ans+=(rem*pow(8,i));
        i++;
    }
    cout<<"Answer is: "<<ans<<endl;
}