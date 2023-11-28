#include<iostream>
#include<vector>
#include<array>
using namespace std;

void solve(int arr[],vector<int> output,int index,vector<vector<int> >& ans ,int n)
{
    if(index>=n)
        ans.push_back(output);
        return;
    
    //Exclude part
    solve(arr,output,index+1,ans,n);

    //include part
    int element=arr[index];
    output.push_back(element);
    solve(arr,output,index+1,ans,n);
}

vector<vector<int>> subset(int arr[],int n){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(arr,output,index,ans,n);
    return ans;
}

int main()
{
    int n,arr[1000];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    subset(arr,n);
    return 0;
}