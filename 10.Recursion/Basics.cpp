#include<iostream>
using namespace std;

void fun(int n){
    // Base Case
    if(n==0){
        cout<<"Happy Birthday"<<endl;
        return;
    }
    cout<<n<<" days left for birthday"<<endl;
    fun(n-1);//Recursive call
}

int main(){
    int n;
    cout<<"Enter the remainder days:";
    cin>>n;

    // Iterative Approach
    // for(int i=n;i>0;i--){
    //     cout<<i<<" days left for birthday"<<endl;
    // }
    // cout<<"Happy Birthday"<<endl;

    // Recusive Approach
    fun(n);
    return 0;
}