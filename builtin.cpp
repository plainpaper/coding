#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int min=*min_element(v.begin(),v.end());
    cout<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ele;
    cin>>ele;
    int count1=count(v.begin(),v.end(),ele);
    cout<<count1<<endl;
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}