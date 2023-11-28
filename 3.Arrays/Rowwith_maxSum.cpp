//Print Row_Index with Maximum Sum

#include<climits>
#include<iostream>
using namespace std;

int main(){
    int index = -1,sum = INT_MIN;
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    

    for(int i=0;i<3;i++){
        int total=0;
        for(int j=0;j<4;j++)
        {
            total+=arr[i][j];
            if(total>sum){
                sum=total;
                index=i;
            }
        }
    }

    cout<<"The sum is "<<sum<<" with row_index is "<<index<<endl;
    return 0;
}