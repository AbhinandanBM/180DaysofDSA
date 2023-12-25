#include<iostream>
using namespace std;

bool isPal(string str,int start,int end){
    if(start>=end)
        return 1;

    if(str[start]!=str[end])
        return 0;
    else
        return isPal(str,start+1,end-1);
}

int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;

    if(isPal(str,0,str.length()-1))
        cout<<"Given string is Palindrome"<<endl;
    else
        cout<<"Given string is not Palindrome"<<endl;

    return 0;
}