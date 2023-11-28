#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Abhi");
    s.push("Suma");

    cout<<"The top of the stack is "<<s.top()<<endl;

    s.push("Amma");
    s.push("Appa");

    cout<<"The top of the stack is "<<s.top()<<endl;

    cout<<"The size of the stack is "<<s.size()<<endl;
    cout<<"Empty or Not "<<s.empty()<<endl;

    while (!s.empty()) {
        cout << s.top() <<" ";
        s.pop();
    }
}