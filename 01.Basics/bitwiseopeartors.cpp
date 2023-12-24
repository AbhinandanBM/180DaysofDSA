//Bitwise Operation Experiements

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the values for a and b:";
	cin>>a>>b;
	
	cout<<"a&b "<< (a&b)<<endl;
	cout<<"a|b "<< (a|b) <<endl;
	cout<<"~a "<< ~a <<endl;
	cout<<"a^b "<< (a^b)<<endl;
	
	cout<<(17>>1)<<endl;
	cout<<(17>>2)<<endl;
	cout<<(19<<1)<<endl;
	cout<<(21<<2)<<endl;
	return 0;
}
