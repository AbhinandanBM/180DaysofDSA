//To check whether the entered character is lowercase ,uppercase or digit

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter a charcter:"<<endl;
	cin>>ch;
	
	if(islower(ch))
	{
		cout<<"Entered character is lower case"<<endl;
	}
	else if(isupper(ch))
	{
		cout<<"Entered character is upper case"<<endl;
	}
	else
	{
		cout<<"Entered character is not a letter,it is a Digit!"<<endl;
	}
	return 0;
}
