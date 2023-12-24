#include<iostream>
using namespace std;

int main()
{
	int first[100]={1,5,7};
	cout<<first[4]<<endl;
	
	int second[150];
	for(int i=0;i<150;i++)
	{
		cout<<second[i]<<" ";
	}
	cout<<endl;
	cout<<second[8]<<endl;
	
	int third[5]={2,8};
	for(int i=0;i<5;i++)
	{
		cout<<third[i]<<endl;
	}
}
