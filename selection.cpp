#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Enter the size ve\n";
    int n;
    cin>>n;
    cout<<"Enter the value for an ve\n";
    int ele;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Array before sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int small,temp;
    for(int i=0;i<n-1;i++)
    {
        small=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[small]>v[j])
            small=j;
        }
        if(small!=i)
        {
            temp=v[i];
            v[i]=v[small];
            v[small]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}