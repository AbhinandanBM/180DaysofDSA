#include<iostream>
using namespace std;

int hcf(int a,int b,int c){
    int maxi=0;

    maxi=max(a,max(b,c));
    for(int i=maxi;i>1;i--){
        if((a%i==0)&&(b%i==0)&&(c%i==0)){
            return i;
            break;
        }
    }
    return 1;
}

int main(){
    int a,b,c;
    cout<<"Enter the numbers:";
    cin>>a>>b>>c;

    cout<<hcf(a,b,c)<<endl;
    return 0;
}