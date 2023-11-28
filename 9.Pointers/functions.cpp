#include<iostream>
using namespace std;

void print(int *ptr)
{
    cout<<*ptr<<endl;
}

void update(int *ptr)
{
    ptr=ptr+1;
    cout<<ptr<<endl;
}

int getSum(int *arr,int n)//it only holds the part of the array i.e first element address of the array.
{
    cout<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int value=5;
    int *ptr=&value;

    print(ptr);
    cout<<"Before update "<<ptr<<endl;
    update(ptr);
    cout<<"After update "<<ptr<<endl;/*It prints the same address before and after because in the update function
    it creates the separate copy and update there*/

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Sum is "<<getSum(arr,10)<<endl;

}
