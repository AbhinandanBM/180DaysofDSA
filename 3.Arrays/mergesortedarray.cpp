#include<iostream>

using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0,j=0;
    int k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }
    }

    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr2[k++]=arr2[j++];
    }
}

void print(int arr3[],int p)
{
    for(int i=0;i<p;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}

int main()
{
//    int n,m;
//    int arr1[n],arr2[m];
//    cout<<"Enter the size of first array"<<endl;
//    cin >> n;
//    cout<<"Enter the size of second array"<<endl;
//    cin >> m;
//    int p=n+m;
//    cout<<"Enter the first array elements"<<endl;
//    for(int i=0; i<n; i++)
//    {
//        cin>>arr1[i];
//    }
//    cout<<"Enter the second array elements"<<endl;
//    for(int j=0; j<m; j++)
//    {
//        cin>>arr2[j];
//    }
    // int arr3[p]={0};
	int arr1[5]={1,3,5,7,9};
	int arr2[3]={2,4,6};
	int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
    return 0;
}
