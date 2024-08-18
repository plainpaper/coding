#include<bits/stdc++.h>

using namespace std;
const int N=1e7+1;
vector<bool> isprime(N,1);

int main()
{
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i<N;i++)
    {
        for(int j=2*i;j<N;j=j+i)
            {
                isprime[j]=false;
            }
    }
    cout<<"enter the number\n";
    int n;
    cin>>n;
    if(isprime[n])
    cout<<"Prime\n";
    else
    cout<<"Not\n";
    return 0;
}