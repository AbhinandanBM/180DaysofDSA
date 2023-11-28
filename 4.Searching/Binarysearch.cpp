#include<iostream>
using namespace std;

// Binary search is an efficient search algorithm used to find a specific item in a sorted list or array. It works by repeatedly dividing the search space in half and comparing the target value with the middle element. If the middle element is not the target, it narrows the search space to the half where the target might be found. This process continues until the target is found or the search space is empty. Binary search has a time complexity of O(log n), making it much faster than linear search for large datasets, but it requires the data to be sorted.

int BinarySearch(int arr[],int n,int key){
	int start=0,end=n-1,mid;

	while(start<=end){
		mid=start+(end-start)/2;
		if(arr[mid]==key)
			return mid;
		else if(arr[mid]<key)
			start=mid+1;
		else
			end=mid-1;
	}
	return -1;
}

int main(){
	int arr[1000],n,key;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the key to search:";
	cin>>key;

	cout<<BinarySearch(arr,n,key)<<endl;
	return 0;
}