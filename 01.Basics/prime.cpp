// To check given number is prime or not

#include<iostream>
using namespace std;

int main()
{
	int n;
	bool isprime=1;
	cout<<"Enter a number:";
	cin>>n;
	
	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			isprime=0;
			break;
		}	
	}
	
	if(isprime==0)
	{
		cout<<"Not a prime number"<<endl;
	}
	else
	{
		cout<<"It's a Prime number!"<<endl;
	}
	
	return 0;
}
