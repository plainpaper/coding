#include<bits/stdc++.h>
using namespace std;

int bin(int p)
{
    int temp=p;
    stack<int> s;
    while(true)
    {
        int temp1=temp;
        while(temp!=0)
        {
            int res=temp%2;
            s.push(res);
            temp=temp/2;
        }
        int n=s.size();
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=s.top();
            s.pop();
        }
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==1)
            if(arr[i+1]==1)
            {
                flag=1;
                p=p+1;
                temp=p;
                break;
            }
        }
        if(flag==0)
            return temp1;
    }
}

int main()
{
    int p;
    cin>>p;
    int res=bin(p);
    cout<<res<<endl;
    return 0;
}