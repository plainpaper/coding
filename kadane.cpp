#include<bits/stdc++.h> 
using namespace std;

int find(vector<int> v,int n)
{
    int sum=0;
    int maxi=INT_MIN;
    int start=-1;
    int end=-1;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
            start=i;
        sum+=v[i];
        if(sum>maxi)
        {
            maxi=sum;
            end=i;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    for(int i=start;i<=end;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return maxi;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<find(v,n);
    return 0;
}