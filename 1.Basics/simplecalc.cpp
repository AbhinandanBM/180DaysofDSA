#include<iostream>
using namespace std;

int main()
{
	int a,b;
	char op;
	
	cout<< "Enter the value of a: "<<endl;
	cin>>a;
	
	cout<<"Enter the value of b: "<<endl;
	cin>>b;
	
	cout<<"Enter the operation to which you want to perform:"<<endl;
	cin>>op;
	
	switch(op)
	{
		case '+': cout<<"Result: "<<(a+b)<<endl;
				  break;
		case '-': cout<<"Result: "<<(a-b)<<endl;
				  break;
		case '*': cout<<"Result: "<<(a*b)<<endl;
				  break;
		case '/': if(b==0)
				  {
				  	cout<<"division is not possible"<<endl;
				  	exit(0);
				  }
				  else
				  {
				  	cout<<"Result: "<<(a/b)<<endl;
				  }
				  break;
		case '%': cout<<"Result: "<<(a%b)<<endl;
				  break;
		default: cout<<"Enter the valid operation"<<endl;
	}
}
