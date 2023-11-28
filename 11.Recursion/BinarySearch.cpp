#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int size,int s,int e,int key)
{
    if(s>e)
        return 0;
    
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
        return 1;
    
    if(arr[mid]<key)
        return BinarySearch(arr,size,mid+1,e,key);
    else
        return BinarySearch(arr,size,s,mid-1,key);
    
}

int main()
{
    int n,arr[1000],key;
    cout<<"Enter the Size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the array the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search:";
    cin>>key;
    int s=0,e=n-1;
    bool ans=BinarySearch(arr,n,s,e,key);
    if(ans)
        cout<<"Element is present"<<endl;
    else
        cout<<"Element is Absent"<<endl;
    return 0;
}