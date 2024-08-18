#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hsh[26];
    string str;
    cin>>str;
    for(int i=0;i<26;i++)
        hsh[i]=0;
    for(int i=0;i<str.size();i++)
        hsh[str[i]-'a']++;
    for(int i=0;i<26;i++)
    {
        if(hsh[i]>0)
        {
            char temp=i+'a';
            cout<<temp<<" - "<<hsh[i]<<endl;
        }
    }
}