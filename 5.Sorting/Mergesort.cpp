#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    vector<int> temp(end-start+1);
    int left=start,right=mid+1,index=0;

    while (left<=mid && right<=end)
    {
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            left++,index++;
        }
        else{
            temp[index]=arr[right];
            right++,index++;
        }
    }

    while (left<=mid)
    {
        temp[index]=arr[left];
        left++,index++;
    }

    while (right<=end)
    {
        temp[index]=arr[right];
        right++,index++;
    }
    
    // copy to the original array
    index =0;
    while (start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }

}

void MergeSort(int arr[],int start,int end){
    if(start==end)
        return;

    int mid = start+(end-start)/2;
    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    int n,arr[100];
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting the Array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    MergeSort(arr,0,n-1);

    cout<<"After Sorting the Array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}