#include<bits/stdc++.h>

using namespace std;

vector<int> getPrime(int N) {
        // code here
        vector<int> v;
        for(int i=2;i<=N;i++)
        {
            int flag=0;
            for(int j=2;j<=sqrt(i);j++)
            if(i%j==0)
            {
                flag=1;
                break;
            }
            if(!flag)
            v.push_back(i);
        }
        vector<int> res;
        int flag1;
        map<int,int> m;
        for(int i=0;i<v.size();i++)
        {
            int num=v[i];
            int more=N-num;
            if(m.find(more)!=m.end())
            {
                res.push_back(more);
                res.push_back(v[i]);
                return res;
            }
            m[num]=i;
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
int main()
{
    int n;
    cin>>n;
    vector<int> res=getPrime(n);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}