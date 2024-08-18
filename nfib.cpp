#include<bits/stdc++.h>
using namespace std;

vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> v;
        if(n==1){ 
            v.push_back(1);
            return v;
        }
        long long f1=1;
        long long f2=1;
        v.push_back(f1);
        v.push_back(f2);
        for(int i=3;i<=n;i++)
        {
            long long res=f1+f2;
            f1=f2;
            f2=res;
            v.push_back(res);
        }
    return v;
    }

int main()
{
    int n;
    cin>>n;
    vector<long long> v=printFibb(n);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}