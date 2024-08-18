#include<bits/stdc++.h>
using namespace std;
const int N=1e7+1;
vector<int> vec(N);
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    cout<<"before sorting\n";
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        vec[v[i]]++;
    }
    cout<<"After sorting\n";
    for(int i=0;i<N;i++)
    {
        if(vec[i]>0)
        {
            for(int j=1;j<=vec[i];j++)
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}