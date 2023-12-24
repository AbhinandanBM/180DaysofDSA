//sum of n numbers

#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	float avg=0;
	cout<<"Enter n:";
	cin>>n;
	int i=1;
	
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;	
	}
	avg=sum/n;
	cout<<"Sum is:"<<sum<<endl;
	cout<<"Average is:"<<avg<<endl;
	
	return 0;
}
