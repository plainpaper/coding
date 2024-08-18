#include<bits/stdc++.h>

using namespace std;
const int N=1e5+10;
int fibo[N];

int main()
{
    int t;
    cin>>t;
    int fib1=0;
    int fib2=1;
    fibo[0]=0;
    fibo[1]=0;
    fibo[2]=1;
    for(int i=3;i<N;i++)
    {
        int fib3=fib1+fib2;
        fibo[i]=fib3;
        fib1=fib2;
        fib2=fib3;
    }
    while(t--)
    {
        int n;
        cin>>n;
        int res=0;
        fib1=0;
        fib2=1;
        if(n==1)
        {
            cout<<fib1<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<fib2<<endl;
            continue;
        }
        // for(int i=3;i<=n;i++)
        // {
        //     res=fib1+fib2;
        //     fib1=fib2;
        //     fib2=res;
        // }
        cout<<fibo[n]<<endl;
    }
    return 0;
}