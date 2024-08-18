#include<bits/stdc++.h>
using namespace std;

const double eps=1e-6;

int main()
{
    double x;
    cin>>x;
    double low=0;
    double high=x;
    double mid=0;
    while(high-low>eps)
    {
        mid=(low+high)/2;
        if(mid*mid>x)
        high=mid;
        else
        low=mid;
    }
    cout<<low<<endl;
    return 0;
}