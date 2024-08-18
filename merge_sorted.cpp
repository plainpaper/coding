#include<bits/stdc++.h>
using namespace std;
//this aproach is using extra space.
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
    vector<int> res(n+m);
    int left=0;
    int right=0;
    int index=0;
    while(left<n && right<m)
    {
        if(v1[left]<=v2[right])
        {
            res[index]=v1[left];
            left++;
            index++;
        }
        else
        {
            res[index]=v2[right];
            right++;
            index++;
        }
    }
    while(left<n)
    {
        res[index++]=v1[left++];
    }
    while(right<m)
    {
        res[index++]=v2[right++];
    }
    for(int i=0;i<(n+m);i++)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}