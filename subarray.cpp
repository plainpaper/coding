#include<bits/stdc++.h>
using namespace std;


// subarray with sum and we have to return count 
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int check;
    cin>>check;
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=v[i];
        for(int j=i+1;j<n;j++)
        {
            sum += v[j];
            if(sum>check)
                break;
            else if(sum==check)
            {
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}