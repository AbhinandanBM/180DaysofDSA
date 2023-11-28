#include<iostream>
using namespace std;

isPresent(int arr[][4],int target,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
                return 1;
        }
    }
    return 0;
}

int main()
{
    //2D array creation
    int arr[3][4];


    //row-wise input
    cout<<"Element the array elements"<<endl;
    for(int r0w=0; r0w<3; r0w++)
    {
        for(int col=0;col<4;col++)
        {
            cin>>arr[r0w][col];
        }
    }

    for(int r0w=0; r0w<3; r0w++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<arr[r0w][col]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the element to search"<<endl;
    cin>>target;

    if(isPresent(arr,target,3,4))
    {
        cout<<"Element Found"<<endl;
    }
    else
    {
        cout<<"Element Not Found"<<endl;
    }



}