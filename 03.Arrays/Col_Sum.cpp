#include<iostream>
using namespace std;

void Col_Sum(int arr[][3],int row,int col){
    for(int j=0;j<col;j++){
        int sum=0;
        for(int i=0;i<row;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};

    Col_Sum(arr,4,3);
    return 0;
}