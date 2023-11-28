#include<iostream>
using namespace std;

void count(int n){
    if (n==0)
        return;
    
    cout<<n<<endl;/* Tail end Recursion*/
//    count(n-1);
//

	count(n-1);
	cout<<n<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number to count: "<<endl;
    cin>>n;

    count(n);

    
}
