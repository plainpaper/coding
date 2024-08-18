#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];

void merge(int l,int r,int mid)
{
    int l_sz=mid-l+1;
    int l_arr[l_sz+1];
    int r_sz=r-mid;
    int r_arr[r_sz+1];
    for(int i=0;i<l_sz;i++)
        l_arr[i]=arr[i+l];
    for(int i=0;i<r_sz;i++)
        r_arr[i]=arr[mid+i+1];
    r_arr[r_sz]=l_arr[l_sz]=INT_MAX;
    int lf=0;
    int ri=0;
    for(int i=l;i<=r;i++)
    {
        if(l_arr[lf]<=r_arr[ri])
        {
            arr[i]=l_arr[lf];
            lf++;
        }
        else
        {
            arr[i]=r_arr[ri];
            ri++;
        }
    }
}

void mergesort(int l,int r)
{
    //cout<<"after";
    if(l==r)
    return;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r,mid);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    mergesort(0,n-1);
    cout<<"After sorting\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}