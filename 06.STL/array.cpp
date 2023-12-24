#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<int, 4> a = {2,3,4,5};

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Index at --> "<<a.at(2)<<endl;
    cout<<"Empty or Not -->"<<a.empty()<<endl;
    cout<<"First Element -->"<<a.front()<<endl;
    cout<<"Last Element -->"<<a.back()<<endl;

}