#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,4,5,6,7};
    int *p=arr;

    cout<<"The address of the first memory location is "<<arr<<endl;
    cout<<"The address of the first memory location is "<<arr+0<<endl;
    cout<<"The address of the first memory location is "<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<"The value at 0th location is "<<*arr<<endl;

    cout<<"Addition "<<*arr+1<<endl;
    cout<<"The value at 1st location is "<<*(arr+1)<<endl;
    cout<<p<<endl;
    cout<<*(p+1)<<endl;
    
    // Print the address of all array elements
    for(int i=0;i<5;i++){
        cout<<arr+i<<endl;
    }
    
    // Print the all value of the array
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl;
    }

    int *ptr = arr;

    // Print all the values
    // for(int i=0;i<5;i++)
    //     cout<<*(ptr+i)<<endl;

    // Print all the address
    // for(int i=0;i<5;i++)
    //     cout<<ptr+i<<endl;

    // Arthimetic Operation ptr++,ptr--

    // for(int i=0;i<5;i++){
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }
    // cout<<endl;

    ptr=ptr+4;
    cout<<ptr<<endl;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr--;
    }

    // Addition,Subtraction
    
    // cout<<ptr<<endl;
    // ptr=ptr+3;
    // cout<<ptr<<" "<<*ptr<<endl;

    // cout<<ptr<<endl;
    // ptr=ptr-2;
    // cout<<ptr<<" "<<*ptr<<endl;

    return 0;
}