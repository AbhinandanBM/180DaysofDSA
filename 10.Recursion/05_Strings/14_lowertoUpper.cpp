#include<iostream>
using namespace std;

void ltoU(string &str,int index){
    if(index == -1)
        return;

    str[index]='A'+str[index]-'a';
    ltoU(str,index-1);
}

int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;

    ltoU(str,str.length()-1);

    cout<<str<<endl;

    return 0;
}