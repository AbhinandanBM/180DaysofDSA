#include<iostream>
using namespace std;

int per_sum(int arr[],int index,int n,int sum){
    // To handle case of non negative integers - 0 
    // Ex: 1 0 sum:1 it should return count 2 because 1 and 1 0 return sum 1
    if(index == n){
        if(sum == 0)
            return 1;
        else
            return 0;
    }

    // if(index == n)
    //     return sum == 0;
        

    return per_sum(arr,index+1,n,sum) + per_sum(arr,index+1,n,sum-arr[index]);
}

int main(){
    int n,arr[100],sum;
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the sum:";
    cin>>sum;

    cout<<"Possible subset sum count:"<<per_sum(arr,0,n,sum)<<endl;

    return 0;
}