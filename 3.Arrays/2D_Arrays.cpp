#include<iostream>
using namespace std;

void PrintArray(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    //2D array creation
    int arr[3][4];
    
    //2D Array initialization
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11}};


    //row-wise input
    for(int r0w=0; r0w<3; r0w++)
    {
        for(int col=0;col<4;col++)
        {
            cin>>arr[r0w][col];
        }
    }

    //col-wise input
    // for(int col=0;col<4;col++)
    // {
    //     for(int r0w=0; r0w<3; r0w++)
    //     {
    //         cin>>arr[r0w][col];
    //     }
    // }

    PrintArray(arr,3,4);

}