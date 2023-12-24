#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for(int row=n;row>=1;row--){
        for(int star=1;star<=row;star++){
            cout<<"* ";
        }
        for(int space=1;space<=2*(n-row);space++){
            cout<<"  ";
        }
        for(int star=1;star<=row;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=1;row<=n;row++){
        for(int star=1;star<=row;star++){
            cout<<"* ";
        }
        for(int space=1;space<=2*(n-row);space++){
            cout<<"  ";
        }
        for(int star=1;star<=row;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
}