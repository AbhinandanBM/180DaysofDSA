/*Reference variable is an alternate name of already existing variable.
It cannot be changed to refer another variable and should be initialized at the time of declaration and cannot be NULL.
The operator '&' is used to declare reference variable.*/

#include<iostream>
using namespace std;

int main()
{
    int i=5;

    int& j=i;//Reference Variable for i

    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;

    return 0;
}