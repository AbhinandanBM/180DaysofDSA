#include<iostream>
using namespace std;

//to print row wise sum
void printRSum(int arr[][4],int row,int col)
{
    cout<<"Printing Row wise sum ->"<<endl;
    for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<4;col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;

}

//to print column wise sum
void printCSum(int arr[][4],int row,int col)
{
    cout<<"Printing col wise sum ->"<<endl;
    for(int col=0;col<4;col++)
    {
        int sum=0;
        for(int row=0;row<3;row++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;

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

    printRSum(arr,3,4);
    printCSum(arr,3,4);


}