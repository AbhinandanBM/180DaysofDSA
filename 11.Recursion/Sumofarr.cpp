#include<iostream>
using namespace std;

int Sumarr(int arr[],int n)
{
    int sum=0;
    if(n==0)
        return 0;
    else
        sum+=arr[0];
        return sum;
    
    Sumarr(arr+1,n-1);
}

int main()
{
    int n,arr[1000];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=Sumarr(arr,n);
    cout<<"Sum: "<<sum<<endl;
    return 0;
}