// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
//range of prime using seive algorithm
using namespace std;
const int N=1e7+1;
vector<bool> v(N,1);
int main() {
    v[0]=false;
    v[1]=false;
    for(int i=2;i<=N;i++)
        for(int j=i*2;j<=N;j+=i)
            v[j]=false;
    // cout<<"Enter the n\n";
    // int n;
    // cin>>n;
    // if(v[n]) cout<<"prime\n";
    // else cout<<"not prime\n";
    int m,n;
    cout<<"Enter the value for m and n\n";
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    if(v[i]) cout<<i<<" ";
    return 0;
}