#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    vector<int> v1(m);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<m;i++)
        cin>>v1[i];
    sort(v1.begin(),v1.end());
    int i=0;
    for(auto it=v1.rbegin();it!=v1.rend();++it)
    {
        if(*it>v[i])
        v[i]=*it;
        i++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}