#include<iostream>
using namespace std;

int minEle(int arr[],int index,int n){
    if(index == n-1)
    return arr[index];

    return min(arr[index],minEle(arr,index+1,n));
}

int main(){
    int arr[]={2,5,6,1,9};

    cout<<minEle(arr,0,5)<<endl;

    return 0;
}