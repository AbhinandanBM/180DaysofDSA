#include<iostream>
using namespace std;

int main()
{
	int a[1000];
	
	fill_n(a,1000,1);
	
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
