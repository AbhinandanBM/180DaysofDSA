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
        for(int star=1;star<=row;star++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}