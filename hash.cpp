#include<bits/stdc++.h>

using namespace std;
const int N=1e5+10;
int hsh[N];



int main()
{
    int q;
    cin>>q;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
     int large=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        large=-1*arr[i];
        else if(large<arr[i])
        large=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]+large;
    }
    for(int i=0;i<n;i++)
    hsh[arr[i]]++;
    while(q--)
    {
        int x;
        cin>>x;
        int ct=0;
        // for(int i=0;i<n;i++)
        //     if(arr[i]==x)
        //         ct++;
        cout<<hsh[x+large]<<endl;
    }
    return 0;
}