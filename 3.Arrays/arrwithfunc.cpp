#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
	cout<<"Printing the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Printing is DONE"<<endl;
}

int main()
{
	int a[100]={2,4,6,7,8,9,12,34,37};
	printarray(a,100);
	
}
