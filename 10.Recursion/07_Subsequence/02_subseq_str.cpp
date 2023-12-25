#include<iostream>
#include<vector>
using namespace std;

void subsequence(string s,int index,int n,string& temp,vector<string>& ans){
    if(index == n){
        ans.push_back(temp);
        return;
    }

    // Exclude
    subsequence(s,index+1,n,temp,ans);

    // Include
    temp.push_back(s[index]);
    subsequence(s,index+1,n,temp,ans);
    temp.pop_back();
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    string temp;
    vector<string> ans;

    subsequence(s,0,s.size(),temp,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}