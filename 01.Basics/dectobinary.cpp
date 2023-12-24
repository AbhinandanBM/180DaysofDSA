#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,ans=0;
	cout<<"Enter a number:";
	cin>>n;
	int i=0;
	while(n!=0)
	{
		
		int bit = n&1;
		ans = (bit * pow(10,i))+ans;
		
		n = n>>1;
		i=i+1;
	}
	cout<<"Answer is "<<ans<<endl;
	
}
