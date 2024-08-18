#include<bits/stdc++.h>
using namespace std;

int fun(int a[],int n)
{
    if(n==1)
        return 1;
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    int left=a[0];
    for(int i=1;i<n;i++)
    {
        int right=sum-left-a[i];
        if(right==left)
        return i+1;
        left+=a[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<fun(arr,n)<<endl;
    return 0;
}