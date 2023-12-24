#include<iostream>
using namespace  std;

bool isEven(int a)
{
	if(a&1)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int num;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	
	if(isEven(num))
	{
		cout<<"The number is Even"<<endl;
	}
	else
	{
		cout<<"The number is odd"<<endl;
	}
	return 0;
	
}
