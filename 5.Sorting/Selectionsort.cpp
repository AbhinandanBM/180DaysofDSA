#include<iostream>
using namespace std;

// Selection sort is a simple comparison-based sorting algorithm. It works by repeatedly selecting the minimum (or maximum) element from an unsorted portion of the list and moving it to the beginning (or end) of the sorted portion. This process continues until the entire array is sorted. Selection sort has a Time complexity of O(n^2) and Space complexity of O(1), making it inefficient for large datasets, but it's easy to understand and implement.

void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
                index=j;
        }
        swap(arr[i],arr[index]);
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
    selectionsort(arr,n);

    cout<<"Sorted array elements are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}