#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;

    m[1]="Abhi";
    m[13]="Nandan";
    m[2]="Shetty";

    m.insert({5,"Royal"});
    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"6 present->"<<m.count(6)<<endl;
    m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto itr=m.find(2);
    cout<<"Find->"<<endl;
    for(auto it=itr;it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}