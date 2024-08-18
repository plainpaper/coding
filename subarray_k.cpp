#include<bits/stdc++.h>

using namespace std;

int sub(vector<int> &v,int k,int n)
{
    int sum=INT_MIN;
    int i=0;
    int large=0;
    int j=0;
    while(j<n)
    {
        large+=v[j];
        if(j-i+1<k)
        j++;
        else if(j-i+1==k)
        {
            sum=max(large,sum);
            large=large-v[i];
            i++;
            j++;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int k;
    cin>>k;
    cout<<sub(v,k,n);
    return 0;
}