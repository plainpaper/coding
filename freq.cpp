#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int> m;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    for(auto val:m)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(m[s[i]]%2!=0) count++;
    }
    if(count>1) cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    cout<<"Enter the elements for an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    // auto it=mp.begin();
    // auto it1=--mp.end();
    // cout<<"Highest frequency is "<<it->first<<endl;
    // cout<<"Lowest frequency is "<<it1->first<<endl;
    int high=INT_MIN;
    int low=INT_MAX;
    int hi=0;
    int lo=0;
    cout<<mp.size()<<endl;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" -> "<<it->second<<endl;
        if(high<it->second)
        {
            high=it->second;
            hi=it->first;
            //cout<<"High "<<high<<endl;
        }
        if(low>it->second)
        {
            low=it->second;
            lo=it->first;
            //cout<<"Low "<<low<<endl;
        }
    }
    cout<<hi<<endl;
    cout<<lo<<endl;
    return 0;
}