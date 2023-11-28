// Maximum difference between two elements such that larger element appears after the smaller number

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxDiff(vector<int> arr,int n){
    int max_diff=arr[1]-arr[0];

    int min_element = arr[0]; 
     for(int i = 1; i < n; i++) 
     {      
       if (arr[i] - min_element > max_diff)                              
       max_diff = arr[i] - min_element; 
         
       if (arr[i] < min_element) 
       min_element = arr[i];
     }
       
     return max_diff; 
}

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<maxDiff(arr,n)<<endl;
    return 0;

}