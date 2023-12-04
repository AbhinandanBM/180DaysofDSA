#include<iostream>
using namespace std;

int main(){
    //2D array creation
    int n,m;
    cout<<"Enter the row size:";
    cin>>n;
    cout<<"Enter the column size:";
    cin>>m;

    int **ptr = new int* [n];

    for(int i=0;i<n;i++){
        ptr[i] = new int[m];
    }

    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ptr[i][j];
        }
    }

    cout<<"The array elements are:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Releasing memory from the heap
    for(int i=0;i<n;i++){
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}