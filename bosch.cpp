#include<bits/stdc++.h>
using namespace std;

int cal(int n,int m,vector<int> v1,vector<int> v2,int money)
{
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v.push_back({v1[i],v2[j]});
        }
    }
    int max=0;
    int temp1=0,temp2=0;
    for(int i=0;i<v.size();++i)
    {
        if(max<v[i].first+v[i].second && money>=v[i].first+v[i].second)
        {
            temp1=v[i].first;
            temp2=v[i].second;
            max=v[i].first+v[i].second;
        }
    }
    cout<<temp1<<" "<<temp2<<endl;
    return max;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0;i<n;i++)
        cin>>v1[i];
    for(int i=0;i<m;i++)
        cin>>v2[i];
    int money;
    cin>>money;
    cout<<cal(n,m,v1,v2,money);
    return 0;
}