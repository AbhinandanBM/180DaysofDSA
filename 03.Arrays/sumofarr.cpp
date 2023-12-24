#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of the array:";
	cin>>size;
	
	int arr[1000],sum=0;
	cout<<"Enter the  array elements:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"The sum array elements is:"<<sum<<endl;
	return 0;
	
}
