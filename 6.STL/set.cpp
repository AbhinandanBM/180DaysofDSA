#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(8);
    s.insert(2);

    for(auto i:s){
        cout<<i<<endl;
    }

    set<int>::iterator it =s.begin();
    it++;

    s.erase(it);
    cout<<"After erase"<<endl;
    for(auto i:s){
        cout<<i<<endl;
    }

    cout<<"Present or not "<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<endl;
    }
}