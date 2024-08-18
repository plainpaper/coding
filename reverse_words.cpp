// Online C++ compiler to run C++ program online
//reverse words problem
#include<bits/stdc++.h>

using namespace std;

void rev(string &s,int i,int n)
{
    int l=n;
    for(int k=i;k<=(n+i-1)/2;k++)
    {
        char t=s[k];
        s[k]=s[l-1];
        s[l-1]=t;
        l--;
    }
}

void reverse(string &s)
{
    int j=0;
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]==' ' || i==s.size())
        {
            rev(s,j,i);
            j=i+1;
        }
    }
    rev(s,0,s.size());
}


int main()
{
    string str; 
    getline(cin,str);
    reverse(str);
    cout<<str;
    return 0;
}