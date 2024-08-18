#include<bits/stdc++.h>
using namespace std;
double eps=1e-6;
double mul(double mid,int x)
{
    double ans=1;
    for(int i=1;i<=x;i++)
    ans=ans*mid;
    return ans;
}
int main()
{
    double n;
    cin>>n;
    int x;
    cin>>x;
    double low=1,high=n;
    while(high-low>eps)
    {
        double mid=(low+high)/2;
        if(mul(mid,x)<n)
        low=mid;
        else
        high=mid;    
    }
    cout<<floor(low)<<endl;
    int a,b;
    cin>>a>>b;
    cout<<(a,b)<<endl;
    return 0;
}