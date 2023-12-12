#include<iostream>
using namespace std;

string rev_str(string str,int start,int end){
    if(start>=end)
        return str;

    swap(str[start],str[end]);
    return rev_str(str,start+1,end-1);
}

int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;

    cout<<"Reversed String is: "<<rev_str(str,0,str.length()-1)<<endl;

    return 0;
}