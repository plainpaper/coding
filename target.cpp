#include<bits/stdc++.h>

using namespace std;

vector<int> fun(vector<int> v,int n,int key)
{
    map<int,int> m;
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        int check=key-v[i];
        if(m.find(check)!=m.end())
        {
            res.push_back(m[check]);
            res.push_back(i);
            return res;
        }
        m[v[i]]=i;
    }
    res.push_back(-1);
    res.push_back(-1);
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int tar;
    cin>>tar;
    vector<int> res=fun(v,n,tar);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}