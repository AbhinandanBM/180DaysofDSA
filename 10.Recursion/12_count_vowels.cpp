#include<iostream>
using namespace std;

int cnt_vowel(string str,int index){
    if(index == -1)
        return 0;

    if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
        return 1+cnt_vowel(str,index-1);
    else
        return cnt_vowel(str,index-1);
}

int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;

    cout<<cnt_vowel(str,str.length()-1)<<endl;

    return 0;
}