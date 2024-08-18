#include<bits/stdc++.h>

using namespace std;

void reverseInGroups(vector<int>& arr, int n, int k){
        // code here
        int v=k-1;
        for(int i=0;i<=k/2;i++)
        {
            long long temp=arr[i];
            arr[i]=arr[v];
            arr[v]=temp;
            v--;
        }
        int s=n-k;
        for(int i=0;i<s/2;i++)
        {
            long long temp=arr[k];
            arr[k]=arr[n-1];
            arr[n-1]=temp;
            n--;
            k++;
        }
    }

pair<long long, long long> getMinMax(vector<int> a, int n) {
    long long min=LONG_MAX;
    long long max=LONG_MIN;
    for(int i=0;i<n;i++)
    {
        if(min>a[i]) min=a[i];
        else if(max<a[i]) max=a[i];
    }
    pair<int,int> p;
    p.first=min;
    p.second=max;
    return p;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
   // reverseInGroups(v,n,k);
    cout<<"After reverse\n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    pair<int,int> p=getMinMax(v,n);
    cout<<p.first<<" "<<p.second<<" "<<endl;
    return 0;
}