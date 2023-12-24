#include<iostream>
#include<climits>
using namespace std;


int largestRowSum(int arr[][4],int row,int col)
{
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<4;col++)
        {
            sum+=arr[row][col];
        }
        if(sum>maxi)
        {
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"The largest Row sum is "<<maxi<<endl;
    return rowIndex;

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

    cout<<"Printing the array elements"<<endl;
    for(int r0w=0; r0w<3; r0w++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<arr[r0w][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"The row index of the largest row sum is "<<largestRowSum(arr,3,4)<<endl;
    

}