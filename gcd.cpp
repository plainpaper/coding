#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    int temp;
    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

int main()
{
    int u,v;
    cout<<"Enter the value for u and v\n";
    cin>>u>>v;
    cout<<"Gcd of "<<u<<" and "<<v<<" is "<<gcd(u,v)<<endl;
    return 0;
}