#include<iostream>
using namespace std;


int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    
    // cout<<"Enter the array elements:";
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    int x;
    cout<<"Enter the search element:";
    cin>>x;

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==x){
                cout<<"Found"<<endl;
                return 0;
            }
                
    }
}
    cout<<"Not Found";
}