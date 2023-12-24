#include<iostream>
using namespace std;
/*
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	
	int i=n;
	while(i>=1)
	{
		int j=n;
		while(j>=1)
		{
			cout<<j;
			j=j-1;
		}
		cout<<endl;
		i=i-1;
	}
}
*/

int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<n-j+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}


