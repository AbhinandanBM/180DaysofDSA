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
        for(int num=1;num<=row;num++){
            cout<<num<<" ";
        }
        for(int num=row-1;num>=1;num--){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}