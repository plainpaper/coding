// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;


int find(string s,string str)
{
    map<char,int> m;
    for(int i=0;str[i]!='\0';i++)
        m[str[i]]++;
    int i=0,j=0;
    int count=m.size();
    int ans=0;
    while(j<s.size())
    {
        if(m.find(s[j])!=m.end())
        {
            m[s[j]]--;
            if(m[s[j]]==0) count--;
        }
        //if(m[s[j]]==0) count--;
        if(j-i+1<str.size())
            j++;
        else if(j-i+1==str.size())
        {
            if(count==0)
                ans++;
            if(m.find(s[i])!=m.end())
            {
                m[s[i]]++;
                if(m[s[i]]==1)
                count++;
            }
            
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    string s;
    cin>>s;
    string sub;
    cin>>sub;
    cout<<find(s,sub);
    //cout<<s;
    //cout<<sub;
    return 0;
}