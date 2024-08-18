#include<bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> v1,vector<int> v2)
{
    int N=1e5+1;
    int hsh[N];
    vector<int> res;
    for(int i=0;i<N;i++)
        hsh[i]=0;
    for(int i=0;i<v1.size();i++)
    {
        hsh[v1[i]]++;
    }
    for(int i=0;i<v2.size();i++)
    {
        hsh[v2[i]]++;
    }
    for(int i=0;i<N;i++)
    {
        if(hsh[i]>0)
            res.push_back(i);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    for(int i=0;i<m;i++)
    cin>>v2[i];
    vector<int> res=fun(v1,v2);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}