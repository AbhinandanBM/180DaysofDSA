/* A reference is an alias, or an alternate name to an 
existing variable. 
For example, suppose you make peter a reference (alias) to paul , 
you can refer to the person as either peter or paul .*/

#include <iostream>
using namespace std;

void swapping(int &v1, int &v2) // Pass by reference
{
    int temp = v1;
    v1 = v2;
    v2 = temp;
}

int main()
{
    int first = 10, second = 20;
    swapping(first, second);
    cout << first << " " << second << endl;

    // Reference variable
    int num = 10;
    int &temp=num; //num and temp are same
    cout<<temp<<endl;
    temp++;
    cout<<num<<endl;

    return 0;

    // Note
    // For vector , strings use reference help
    // For int arr and char arr use pointer help
}

