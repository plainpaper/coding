#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int hsh[26];
    for(int i=0;i<26;i++)
        hsh[i]=0;
    int l,r;
    cin>>l>>r;
    l--;r--;
    for(int i=l;i<=r;i++)
    {
        hsh[s[i]-'a']++;
    }
    int oddct=0;
    for(int i=0;i<26;i++)
        if(hsh[i]%2!=0)oddct++;
    if(oddct>1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}