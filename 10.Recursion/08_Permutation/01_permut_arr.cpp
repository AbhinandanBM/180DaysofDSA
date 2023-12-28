#include<iostream>
#include<vector>
using namespace std;

void permut(int arr[],vector<int>& temp,vector<bool>& visited,vector<vector<int>>& ans){

    if(visited.size()==temp.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=0;i<visited.size();i++){
        if(visited[i] == 0){
            visited[i]=1;
            temp.push_back(arr[i]);
            permut(arr,temp,visited,ans);
            visited[i]=0;
            temp.pop_back();
        }
    }
}


// Optimized Approach

void permut_op(vector<int>& arr1,vector<vector<int>>& ans,int index){
    if(index == arr1.size()){
        ans.push_back(arr1);
        return;
    }

    for(int i=index;i<arr1.size();i++){
        swap(arr1[i],arr1[index]);
        permut_op(arr1,ans,index+1);
        swap(arr1[i],arr1[index]);
    }
}

int main(){
    int n,arr[100];
    // cout<<"Enter the size of the array:";
    // cin>>n;

    // cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        // cin>>arr[i];
    }

    vector<int> temp;
    vector<bool> visited(n,0);
    vector<vector<int>> ans;

    // permut(arr,temp,visited,ans);

    vector<int> arr1 = {1,2,3};

    permut_op(arr1,ans,0);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}