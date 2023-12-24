#include<iostream>
using namespace std;

void AlternateSwap(int arr[],int n)
{
	for(int i=0;i<n;i+=2)
	{
		if(i+1 < n)
		{
			swap(arr[i],arr[i+1]);
		}
	}
	
}
void PrintArray(int arr[],int n)
{
	cout<<"After the alternate swapping:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}

int main()
{
	int n,arr[1000];
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"Enter the array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	AlternateSwap(arr,n);
	PrintArray(arr,n);
	
}
