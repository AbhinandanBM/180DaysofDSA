#include<iostream>
using namespace std;

// Bubble sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process continues until the entire list is sorted. Bubble sort has a time complexity of O(n^2), making it inefficient for large datasets. While it's straightforward to implement, it is rarely used in practice due to its inefficiency for large data sets.

void bubbleSort(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
            break;
    }
}

int main(){
    int arr[1000],n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}