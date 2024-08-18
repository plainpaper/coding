#include<bits/stdc++.h>
using namespace std;

vector<int> negetive(vector<int> v,int n,int k)
{
    queue<int> q;
    int i=0;
    int j=0;
    vector<int> a;
    while(j<n)
    {
        if(v[j]<0)
            q.push(v[j]);
        if(j-i+1<k)
            j++;
        else if(j-i+1==k)
        {
            if(q.empty())
                a.push_back(0);
            else
            {
                a.push_back(q.front());
                if(v[i]<0)
                    q.pop();
            }
            i++;
            j++;
        }
    }
    return a;
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
    vector<int> res=negetive(v,n,k);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}