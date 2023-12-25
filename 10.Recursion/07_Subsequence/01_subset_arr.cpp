#include<iostream>
#include<vector>
using namespace std;

// TC: O(2^n)  SC: O(n*2^n)

void subset(int arr[],int index,int n,vector<int>& temp,vector<vector<int>>& ans){
    if(index == n){
        ans.push_back(temp);
        return;
    }

    //Exclude
    subset(arr,index+1,n,temp,ans);
    // Include
    temp.push_back(arr[index]);
    subset(arr,index+1,n,temp,ans);
    temp.pop_back();
}

int main(){
    int n,arr[100];
    vector<int> temp;
    vector<vector<int>> ans;

    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    subset(arr,0,n,temp,ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}