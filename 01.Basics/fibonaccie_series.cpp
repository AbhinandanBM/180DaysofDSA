//Fibonaccie Series

#include<iostream>
using namespace std;

int main()
{
	int n,a,b;
	cout<<"Enter a number:";
	cin>>n;
	
	a=0,b=1;
	cout<<a<<","<<b<<",";
	for(int i=1;i<=n;i++)
	{
		int sum=(a+b);
		cout<<sum<<",";
		a=b;
		b=sum;
		
	}
	
}
