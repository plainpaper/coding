#include<bits/stdc++.h>

using namespace std;
const int N=1e5+1;
vector<bool> sieve(N,1);

int main()
{
    sieve[0]=0;
    sieve[1]=0;
    for(int i=2;i<=N;i++)
    {
        for(int j=i*2;j<=N;j+=i)
        {
            sieve[j]=0;
        }
    }
    int n;
    cin>>n;
    if(sieve[n]) cout<<"prime";
    else cout<<"NOt";
    return 0;
}