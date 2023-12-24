//Add 2 Matrix

#include<iostream>
using namespace std;

int main(){
    int arr1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},
    arr2[3][4]={{0,1,3,4},{6,7,10,11},{41,18,9,11}},
    ans[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            ans[i][j]=arr1[i][j]-arr2[i][j];
        }
    }

    cout<<"The Resultant Matrix:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}