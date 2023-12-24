#include<iostream>
using namespace std;

int main(){
    // variable in heap memory allocation
    int *ptr = new int;
    *ptr=5; //value assign
    cout<<*ptr<<endl;

    float *ptr2 = new float;
    *ptr2 = 8.6;
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int *p = new int[n];

    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
        cin>>p[i];
    
    cout<<"The array elements are:"<<endl;
    for(int i=0;i<n;i++)
        cout<<p[i]<<endl;

    
    // Heap memory deallocation 
    //It is mandatory to deallocate the heap memory which is taken

    delete ptr;
    delete ptr2;
    delete[] p;

    return 0;
}