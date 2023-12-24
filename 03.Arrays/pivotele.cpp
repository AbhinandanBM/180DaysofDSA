#include<iostream>
using namespace std;

int pivotele(int n, int arr[])
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    int n,arr[1000];
    cout<<"Enter the size of array"<<endl;
    cin >> n;
    cout<<"Enter the elements in sorted order"<<endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int pos=pivotele(n,arr);
    cout<<"The position of the pivot element is "<<pos<<endl;
    cout<<"The pivot element is "<<arr[pos]<<endl;

}
    