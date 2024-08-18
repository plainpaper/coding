// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;


int find(string str,int k)
{
    int i=0;
    int j=0;
    unordered_map<char,int> m;
    int maxi=0;
    while(j<str.size())
    {
        m[str[j]]++;
        if(m.size()<k)
            j++;
        else if(m.size()==k)
        {
            maxi=max(maxi,j-i+1);
            j++;
        }
        else if(m.size()>k)
        {
            while(m.size()>k)
            {
                m[str[i]]--;
                if(m[str[i]]==0)
                    m.erase(str[i]);
                i++;
            }
            j++;
        }
    }
    return maxi;
}

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout<<find(s,k);
    return 0;
}