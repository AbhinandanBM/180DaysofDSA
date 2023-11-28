//Counting the number from 1 to given n

#include<iostream>
using namespace std;

void printcount(int num)
{
	for(int i=1;i<=num;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	
	printcount(n);
}
