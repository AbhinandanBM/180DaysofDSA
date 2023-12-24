#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)
    return a;
    
    return gcd(b,a%b);
}

int findlcm(int arr[],int n){
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans=(arr[i]*ans)/(gcd(arr[i],ans));
    }
    return ans;

}

int main(){
    int n,arr[100];
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findlcm(arr,n);
    return 0;
}