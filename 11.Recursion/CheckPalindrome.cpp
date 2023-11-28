#include<iostream>
using namespace std;

bool isPalindrome(string str,int s,int e)
{
    if(s>e)
        return true;
    
    if(str[i]!=str[j])
        return false;
    else
        return isPalindrome(str,s+1,e-1);
}

int main()
{
    string str="abhi";

    bool ans=isPalindrome(str,0,str.length()-1);
    if(ans)
        cout<<"The String is Palindrome"<<endl;
    else
        cout<<"The String is not a Palindrome"<<endl;
    return 0;
}