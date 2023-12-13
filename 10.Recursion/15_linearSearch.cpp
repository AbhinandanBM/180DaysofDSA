#include<iostream>
using namespace std;

bool linearSearch(int arr[],int x,int index,int n){
    if(index == n)
        return 0;

    if(arr[index] == x)
        return 1;
    
    return linearSearch(arr,x,index+1,n);
}

int main(){
    int arr[100],n,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the search Element:";
    cin>>x;

    if(linearSearch(arr,x,0,n))
        cout<<x<<" is present"<<endl;
    else
        cout<<x<<" is not present"<<endl;

    return 0;
}