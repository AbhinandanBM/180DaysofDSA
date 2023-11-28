#include<iostream>
using namespace std;

// Insertion sort is a simple comparison-based sorting algorithm. It builds the final sorted array one element at a time. It takes each element from the unsorted portion of the list and inserts it into its correct position in the sorted portion. This process continues until the entire list is sorted. Insertion sort is more efficient than bubble and selection sort with a time complexity of O(n^2), but still not the best choice for very large datasets. It's often used in practice for small datasets or as part of more complex sorting algorithms.

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else
                break;
        }
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

    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}