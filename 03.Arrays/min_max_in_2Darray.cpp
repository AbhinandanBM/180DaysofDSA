#include<iostream>
#include<climits>
using namespace std;

int max_ele(int arr[][3],int row ,int col){
    int maxi = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] > maxi)
                maxi=arr[i][j];
        }
    }

    return maxi;
}


int min_ele(int arr[][3],int row ,int col){
    int mini = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] < mini)
                mini=arr[i][j];
        }
    }

    return mini;
}


int main(){
    int arr[4][3]={1,2,3,34,45,-5,100,88,56,999,11,12};

    cout<<"The Largest Element is: "<<max_ele(arr,4,3)<<endl;
    cout<<"The Smallest Element is: "<<min_ele(arr,4,3)<<endl;
    return 0;
}