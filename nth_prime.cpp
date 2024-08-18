#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int flag;
    for(int i=2;i<100000;i++)
    {
        flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(!flag)
        {
            cnt++;
        }
        if(cnt==n)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}