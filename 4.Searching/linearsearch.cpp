#include<iostream>
using namespace std;

// Linear search, also known as sequential search, is a straightforward searching algorithm. It works by examining each element in a list or array one by one, starting from the beginning, until it finds the target value or reaches the end of the list. Linear search has a time complexity of O(n), which means its performance is directly proportional to the size of the dataset. It is simple to implement and works for both sorted and unsorted data, but it can be inefficient for large datasets.

bool lSearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int size;
	cout<<"Enter the size of the array:";
	cin>>size;
	
	int arr[1000];
	cout<<"Enter the array elements:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the element that want to search:";
	cin>>key;
	
	bool found=lSearch(arr,size,key);
	if(found)
	{
		cout<<key<<" is present in the array"<<endl;
	}
	else
	{
		cout<<key<<" is absent"<<endl;
	}
}
