#include<bits/stdc++.h>

using namespace std;

int find(vector<int> v,int n,int k)
{
    map<int,int> m;
    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum==k)
            maxi=max(maxi,i+1);
        int rem=sum-k;
        if(m.find(rem)!=m.end())
        {
            int len=i-m[rem];
            maxi=max(maxi,len);
        }
        if(m.find(sum)==m.end())
            m[sum]=i;
    }
    return maxi;
}


int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int k;
    cin>>k;
    cout<<find(v,n,k);
    return 0;
}