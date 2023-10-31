#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> arr){
    int total_sum=0,n=arr.size(),prefix=0;;

    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }

    for(int i=0;i<n-1;i++){
        prefix+=arr[i];

        if(total_sum-prefix == prefix){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<isPossible(v)<<endl;
    return 0;
}