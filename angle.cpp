#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h;
    cin>>h;
    int m;
    cin>>m;
    float hr;
    float min;
    hr=(h%12+m/60.0)*30;
    min=m*6;
    if(abs(hr-min)>180)
    cout<<(abs(hr-min)-180)<<endl;
    else
    cout<<abs(hr-min)<<endl;
    return 0;
}