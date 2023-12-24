#include<iostream>
using namespace std;

void update(int **p2)
{
   // p2=p2+1;
   /*It will not change the any value i.e i,p and p2 because it uses the pass by value*/

    //*p2=*p2+1;
    /*It will update the p value because in this function there is no p pointer
    therefore it will point to main function to update the p pointer content that hold*/

    **p2=**p2+1;
    /*It will update the i value because it uses the double pointer concept
    where it points to p address and the p points to the i address where it will 
    update the i content by 1.*/
}

int main()
{
    int i=5;
    int* p=&i;
    int** p2=&p;

    // cout<<"the p2 is "<<p2<<endl;
    // cout<<"The values are:"<<endl;
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;
    
    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;
    
    cout<<"Before: "<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"After: "<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;




    return 0;
}