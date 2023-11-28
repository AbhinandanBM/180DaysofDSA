#include<iostream>
using namespace std;

int maxmin(int arr[],int size)
{
    int max = arr[0],min=arr[04];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<"The maximum element in an array is "<<max<<endl;
    cout<<"The minimum element in an array is "<<min<<endl;
}

int main()
{
    int arr[10000],n;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
     cout<<"Enter the element to be added to the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxmin(arr,n);
    return 0;
   
}