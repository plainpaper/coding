// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"before\n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    int j=0;
    int val;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        val=v[i];
        while(j!=-1 && val<v[j])
        {
            v[j+1]=v[j];
            j=j-1;
        }
        v[j+1]=val;
    }
     cout<<"after\n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}