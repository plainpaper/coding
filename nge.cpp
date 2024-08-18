#include<bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> vec)
{
    vector<int> temp(vec.size());
    stack<int> s;
    for(int i=0;i<vec.size();i++)
    {
        while(!s.empty() && vec[i]>vec[s.top()])
        {
            temp[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        temp[s.top()]=-1;
        s.pop();
    }
    return temp;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> nge=fun(v);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<((nge[i]==-1) ? -1 : v[nge[i]]);
    }
    cout<<endl;
    return 0;
}