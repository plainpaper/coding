#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            cnt0++;
        else if(arr[i]==1)
            cnt1++;
        else 
            cnt2++;
    }
    int i=0;
    int j=0;
    for(i=0;i<cnt0;i++)
        arr[i]=0;
    for(j=0;j<cnt1;j++)
        arr[j+i]=1;
    for(int k=0;k<cnt2;k++)
        arr[j+i+k]=2;
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}