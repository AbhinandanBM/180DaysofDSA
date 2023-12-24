#include<iostream>
using namespace std;

//0->Not Prime
//1->Prime
int isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	
	if(isPrime(n))
	{
		cout<<n<<" is Prime No."<<endl;
	}
	else
	{
		cout<<n<<" is not a Prime No."<<endl;
	}
	
}
