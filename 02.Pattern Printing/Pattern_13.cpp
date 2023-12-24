#include<iostream>
using namespace std;

int main(){
    // for(char row='a';row<='e';row++){
    //     for(char col='a';col<=row;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl; 
    // }
    for(int i=1;i<=5;i++){
        char name='a'+(i-1);
        for(int j=1;j<=i;j++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}