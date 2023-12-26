#include<iostream>
using namespace std;

bool target(int arr[],int index,int n,int tar){
    if(tar == 0)
        return 1;
    
    if(index == n || tar < 0)
        return 0;

    return target(arr,index+1,n,tar) || target(arr,index+1,n,tar-arr[index]);
}

int main(){
    int n,arr[100],tar;
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the target sum:";
    cin>>tar;

    if(target(arr,0,n,tar))
        cout<<"Possible"<<endl;
    else
        cout<<"Not Possible"<<endl;

    return 0;
}