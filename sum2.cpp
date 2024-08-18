#include<bits/stdc++.h>

using namespace std;
//sum of 2 numbers == target
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    map<int,int> m;
    int tar;
    cin>>tar;
    vector<int> ans(2);
    for(int i=0;i<n;i++)
    {
        int num=v[i];
        int more=tar-num;
        if(m.find(more)!=m.end())
        {
            ans[0]=m[more];//to return index else to return element ans[0]=more;ans[1]=num or v[i];
            ans[1]=i;
            break;
        }
        m[num]=i;
        //m[v[i]]=i;
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
