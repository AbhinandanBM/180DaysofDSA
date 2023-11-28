#include<iostream>
using namespace std;

int main()
{
	char ch='1';
	int num=1;
	

		switch(ch)
		{
			case 1 : cout<<"First case"<<endl;
					 break;
			case '1': switch(num)
						{
							case 1: cout<<"loop value: "<<num<<endl;
							break;
						}
						break;
			default: cout<<"Default case"<<endl;
		}
}
