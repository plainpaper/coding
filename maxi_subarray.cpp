#include<bits/stdc++.h>

//maximum sumarray with given window size k

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> t;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        sum = v[i];
        for(int j=i+1;j<k+i;j++)
        {
            flag=1;
            sum += v[j];
        }
        if(flag)
        t.push_back(sum);
    }
    int max=0;
    for(int i=0;i<t.size();i++)
    {
        if(max<t[i])
        max=t[i];
    }
    cout<<max<<endl;
    //cout<<*max_element(t.begin(),t.end())<<endl;
    // int ans=*max_element(t.begin(),t.end());
    // cout<<ans<<endl;
    return 0;
}