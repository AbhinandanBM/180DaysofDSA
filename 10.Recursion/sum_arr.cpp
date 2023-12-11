#include<iostream>
using namespace std;

int sum_Arr(int arr[],int index,int n){
    if(index == n)
    return 0;

    return arr[index]+sum_Arr(arr,index+1,n);
}

// Reverse sum h.w

int sum(int arr[],int index){
    if(index == -1)
    return 0;

    return arr[index]+sum(arr,index-1);
}

int main(){
    int arr[]={2,3,5,7,8};

    // cout<<sum_Arr(arr,0,5)<<endl;
    cout<<sum(arr,4)<<endl;
    return 0;
}