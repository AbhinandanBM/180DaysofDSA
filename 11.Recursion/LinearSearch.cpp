#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int key)
{
    if(size==0)
        return 0;
    
    if(arr[0]==key)
        return 1;
    else
    {
        bool remainingpart=LinearSearch(arr+1,size-1,key);
        return remainingpart;
    }
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
    bool ans=LinearSearch(arr,n,key);
    if(ans)
        cout<<"Element is present"<<endl;
    else
        cout<<"Element is Absent"<<endl;
    return 0;
}