#include<iostream>
using namespace std;

int subsum(int arr[],int index,int n,int sum){
    if(sum == 0)
        return 1;
    if(sum<0 || index==n)
        return 0;

    return subsum(arr,index+1,n,sum) + subsum(arr,index,n,sum-arr[index]);
}

int main(){
    int n,arr[100],sum;
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the sum:";
    cin>>sum;

    cout<<subsum(arr,0,n,sum)<<endl;

    return 0;
}