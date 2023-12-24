#include<iostream>
using namespace std;

int main(){
    //3D array creation
    int p,n,m;
    cout<<"Enter the 3D size:";
    cin>>p;
    cout<<"Enter the row size:";
    cin>>n;
    cout<<"Enter the column size:";
    cin>>m;

    int ***ptr = new int** [p];

    for(int i=0;i<p;i++){
        ptr[i] = new int *[n];
        for(int j=0;j<n;j++){
            ptr[i][j] = new int[m];
        }
    }

    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>ptr[i][j][k];
            }
        }
    }

    cout<<"The array elements are:"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    //Releasing memory from the heap
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        delete[] ptr[i][j];
    }

    for(int i=0;i<n;i++){
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}