#include<iostream>
using namespace std;

/*
## Quick Sort Explained:

Quick sort is a divide-and-conquer sorting algorithm known for its efficient performance on average data. It works by:

1. **Choosing a pivot element:** This can be any element in the list.
2. **Partitioning the list:** All elements smaller than the pivot are placed to its left, and all larger elements are placed to its right. This effectively creates two sub-lists.
3. **Recursively sorting the sub-lists:** This step is repeated for both sub-lists until each sub-list has only one element (already sorted).

## Time and Space Complexity:

* **Average:**
    * **Time Complexity:** O(n log n). This is because the partitioning step usually divides the list roughly in half, leading to efficient recursion.
    * **Space Complexity:** O(log n). Only a small amount of additional stack space is required for recursion.
* **Worst:**
    * **Time Complexity:** O(n^2). This occurs when the pivot element is always chosen as the smallest or largest element, resulting in unbalanced partitions and deeper recursion.
    * **Space Complexity:** O(log n). The space complexity remains the same, even in the worst case.

## Key Advantages:

* Efficient on average data.
* In-place sorting (doesn't require additional memory for temporary storage).
* Good performance for large datasets.

## Overall, Quick sort is a versatile and efficient sorting algorithm for most scenarios. However, it's important to be aware of its worst-case performance and consider alternative algorithms if the data might be already sorted or have specific characteristics that could trigger the worst-case behavior.

*/

int partition(int arr[],int start,int end){
    int pos = start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(int arr[],int start,int end){
    // Base condition
    if(start>=end)
        return;

    int pivot = partition(arr,start,end);
    // left side
    quicksort(arr,start,pivot-1);
    // right side
    quicksort(arr,pivot+1,end);
}

int main(){
    int n,arr[100];
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Before the sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quicksort(arr,0,n-1);

    cout<<"After the sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}