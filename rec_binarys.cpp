#include<bits/stdc++.h>
using namespace std;
int bina(vector<int> vec,int low,int high,int key)
{
    int mid=(low+high)/2;
    if(low>high) return -1;
    if(vec[mid]==key)
    {
        return mid;
    }
    else if(vec[mid]>key)
        return bina(vec,low,mid-1,key);
    return bina(vec,mid+1,high,key);
    //return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    cin>>vec[i];
    int high=n-1;
    int ele;
    cin>>ele;
    int res=bina(vec,0,high,ele);
    if(res==-1)
        cout<<"not "<<endl;
    else
        cout<<"Found at "<<res<<endl;
    return 0;
}