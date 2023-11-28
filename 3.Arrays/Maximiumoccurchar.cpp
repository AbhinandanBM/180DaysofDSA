#include<iostream>
using namespace std;

char getMaximumoccrchar(string s)
{
    int arr[26]={0};

    //create an array of count character
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }

    //find maxi occ char
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }

    return 'a'+ans;
}

int main()
{
    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;
    cout<<getMaximumoccrchar(s)<<endl;
}