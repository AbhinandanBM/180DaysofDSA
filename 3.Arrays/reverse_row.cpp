//Reverse Each row in 2D Array

#include<iostream>
using namespace std;

void Rev_row(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int start=0,end=col-1;

        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
}

int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    Rev_row(arr,3,4);

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}