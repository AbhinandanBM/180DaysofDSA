#include<iostream>
using namespace std;

void swapping(int *p1,int *p2)//pass by pointer
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<p1<<endl;
    cout<<p2<<endl;
}

void update(int *ptr){
    *ptr=*ptr+1;
}

int main(){
    int first = 10,second = 20;
    cout<<&first<<endl;
    cout<<&second<<endl;
    swapping(&first,&second);
    cout<<first<<" "<<second<<endl;

    
    int n=10;
    update(&n);
    cout<<n;
    return 0;
}