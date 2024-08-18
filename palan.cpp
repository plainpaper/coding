#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l,r;
    int hsh[26];
    for(int i=0;i<26;i++)
        hsh[i]=0;
    cout<<"enter l ans r\n";
    cin>>l>>r;
    int oddct=0;
    for(int i=l-1;i<=r-1;i++)
    {
        hsh[s[i]-'a']++;
    }
    for(int i=l-1;i<=r-1;i++)
    {
        if(hsh[s[i]-'a']%2==1)
            oddct++;
    }
    if(oddct>1)cout<<"Not a palan\n";
    else cout<<"Yes\n";
    return 0;
}