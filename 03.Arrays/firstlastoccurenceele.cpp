#include<iostream>
using namespace std;

int firstoccurence(int n,int arr[],int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2,ans=0;
    while(s<=e)
    {
        if(key==arr[mid])
    {
        ans=mid;
        e=mid-1;
    }
    else if(key<arr[mid])
    {
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    return ans;
}

int lastoccurence(int n,int arr[],int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2,ans=0;
    while(s<=e)
    {
        if(key==arr[mid])
    {
        ans=mid;
        s=mid+1;
    }
    else if(key<arr[mid])
    {
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
	int n,arr[1000],key;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the array elements in sorted order"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the Key to search"<<endl;
	cin>>key;
	int findex=firstoccurence(n,arr,key);
    int lindex=lastoccurence(n,arr,key);
    int Tot_occ=(lindex-findex)+1;
	cout<<"The first occurence of the "<<key<<" is at the index "<<findex+1<<endl;
    cout<<"The last occurence of the "<<key<<" is at the index "<<lindex+1<<endl;
	cout<<"The total number of occurences of "<<key<<" is "<<Tot_occ<<endl;
    return 0;
	
}