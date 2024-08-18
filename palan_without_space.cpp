#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n=s.size()-1;
    int flag=0;
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[n])
        {
            flag=1;
            break;
        }
        n--;
    }
    if(!flag)
        cout<<"given string is palandrome\n";
    else
        cout<<"given string is not a palandrome\n";
    return 0;
}