#include<iostream>
using namespace std;

int getMax(int arr[],int n)
{
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		/*if(arr[i]>maxi)
		{
			maxi=arr[i];
		}*/
		maxi=max(maxi,arr[i]);
	}
	return maxi;
}

int getMin(int arr[],int n)
{
	int mini=INT_MAX;
	for(int i=0;i<n;i++)
	{
		/*if(arr[i]<mini)
		{
			mini=arr[i];
		}*/
		mini=min(mini,arr[i]);
	}
	return mini;
}

int main()
{
	int size;
	cout<<"Enter the array size:";
	cin>>size;
	
	int num[100];
	cout<<"Enter the array elements:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>num[i];
	}
	
	cout<<"Maximum element in the array is: "<<getMax(num,size)<<endl;
	cout<<"Minimum element in the array is: "<<getMin(num,size)<<endl;
}
