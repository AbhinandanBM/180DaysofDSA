#include<iostream>
#include<vector>
using namespace std;

void subset_sum(int arr[],int index,int n,int sum,vector<int>& ans){
    if(index == n){
        ans.push_back(sum);
        return;
    }

    // Exclude
    subset_sum(arr,index+1,n,sum,ans);

    // Include
    subset_sum(arr,index+1,n,sum+arr[index],ans);
}

int main(){
    int n,arr[100];
    vector<int> ans;
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    subset_sum(arr,0,n,0,ans);

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;

    return 0;
}