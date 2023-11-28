/*Reverse an array
-Here we are using the two pointer method to swap the elements at the end to the begining of the array.
-If the array is even it will swap the elements until start<end once the start value becomes greater it will stop.
-If the array is odd it will swap the elements until start=end.
*/

#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
	int start=0;
	int end=n-1;
	
	// while(start<=end)
	// {
	// 	swap(arr[start],arr[end]);
	// 	start++;
	// 	end--;
	// }

	//without using swap function or iterative approach
	while(start<=end)
	{
		int temp=arr[start];
		arr[start] = arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int size;
	cout<<"Enter the size of the array:";
	cin>>size;
	int arr[1000];
	cout<<"Enter the array Elements:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	reverse(arr,size);
	printarray(arr,size);
}
