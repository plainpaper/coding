// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>

using namespace std;

void find(vector<int> v,int n,int k)
{
    for(int i=0;i<n-k;i++)
    {
        int flag=0;
        for(int j=i;j<i+k;j++)
        {
            if(v[j]<0)
            {
                flag=1;
                cout<<v[j]<<" ";
                break;
            }
        }
        if(!flag) 
        {
            cout<<"0 ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    find(v,n,k);
    return 0;
}