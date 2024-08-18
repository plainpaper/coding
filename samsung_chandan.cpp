#include<bits/stdc++.h>
using namespace std;


int cal(vector<int> v,int n,int k)
{
    map<int,int> m;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int temp=k;
        int flag=0;
        m[v[i]]++;
        if(n>=k+i)
        for(int j=i+1;j<k+i;j++)
        {
            flag=1;
            m[v[j]]++;
            if(m[v[j]]>1)
            {
                temp=temp-m[v[j]];
            }
        }
        if(flag)
        count += temp;
        else break;
        m.clear();
    }
    return count;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    cout<<"res is "<<cal(v,n,k);
    return 0;
}