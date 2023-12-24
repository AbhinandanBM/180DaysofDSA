//Print Diagonal Sum of Matrix with equal row==column

#include<iostream>
using namespace std;

void Diasum(int arr[][3],int row,int col){
    int first=0;
    for(int i=0;i<row;i++){
        first+=arr[i][i];
    }

    int second=0;
    int i=0,j=col-1;
    while(j>=0){
        second+=arr[i][j];
        i++,j--;
    }

    cout<<first<<" "<<second<<endl;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    Diasum(arr,3,3);
}