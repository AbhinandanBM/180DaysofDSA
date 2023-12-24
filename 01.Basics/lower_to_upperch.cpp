#include<iostream>
using namespace std;

char convertToUppercase(char ch){
    char ans=ch-'a'+'A';
    return ans;
}

int main(){
    char ch;
    cout<<"Enter the character to convert into uppercase:";
    cin>>ch;
    cout<<convertToUppercase(ch);
    return 0;
}