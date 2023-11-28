#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    //create 2D vector
    // vector<vector<int> >matrix(3,vector<int>(4,1));
    //vector<vector<int>> matrix(row_size,vector<int>(col_size,initialization_value))

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    // }

    // cout<<"Rows = "<<matrix.size()<<endl;
    // cout<<"Cols = "<<matrix[0].size()<<endl;

    // Taking Input from user

    int m,n;
    cout<<"Enter the size of rows and columns:";
    cin>>m>>n;

    vector<vector<int> >matrix(m,vector<int>(n,1));

    cout<<"Enter the elements:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"The Elements are: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}


