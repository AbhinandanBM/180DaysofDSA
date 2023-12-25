#include<iostream>
using namespace std;

void print_Arr(int arr[],int index,int n){
    if(index == n)
    return;

    print_Arr(arr,index+1,n); //for reverse print
    cout<<arr[index]<<" ";
    // print_Arr(arr,index+1,n);
}

void Print(int arr[],int index){
    if(index == -1)
    return;

    Print(arr,index-1);
    cout<<arr[index]<<" ";
    // Print(arr,index-1);
}

int main(){
    int arr[]={3,4,6,7,8};

    // print_Arr(arr, 0,5);

    Print(arr,4);

    return 0;
}