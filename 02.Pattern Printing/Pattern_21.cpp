#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int space=1;space<=(n-row);space++){
            cout<<"  ";
        }
        for(int col=row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}