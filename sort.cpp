#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    cout<<"Enter the size of an vector\n";
    cin>>n;
    cout<<"Enter the elements for an vector\n";
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    cout<<"Bfore sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    // int flag=0,temp;
    // for(int i=0;i<n-1;i++)
    // {
    //     flag=1;
    //     for(int j=0;j<n-1-i;j++)
    //     {
    //         if(vec[j]>vec[j+1])
    //         {
    //             temp=vec[j];
    //             vec[j]=vec[j+1];
    //             vec[j+1]=temp;
    //             flag=0;
    //         }
    //     }
    //     if(flag)
    //     break;
    // }
    int val,j;
    for(int i=1;i<n;i++)
    {
        val=vec[i];
        j=i-1;
        while(j>=0 && val>vec[j])
        {
            vec[j+1]=vec[j];
            j--;
        }
        vec[j+1]=val;
    }
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<"now sorting of charector\n";
    vector<char> v;
    int n1;
    cout<<"Enter the size of charector\n";
    cin>>n1;
    cout<<"Enter the charector\n";
    for(int i=0;i<n1;i++)
    {
        char t;
        cin>>t;
        v.push_back(t);
    }
    cout<<"Bfore sorting\n";
    for(int i=0;i<n1;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    char v1;
    cout<<"insertion sort\n";
    for(int i=1;i<n1;i++)
    {
        v1=v[i];
        j=i-1;
        while(j>=0 && v1>v[j])
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=v1;
    }
    cout<<"after sorting\n";
    for(int i=0;i<n1;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int p;
    cout<<"Enter the vlaue for p\n";
    cin>>p;
    int falg=1;
    for(int j=2;j<=p/2;j++)
    {
        if(p%j==0)
        falg=0;
    }
    if(falg)
    cout<<"prime\n";
    else
        cout<<"Not\n";
    return 0;
}