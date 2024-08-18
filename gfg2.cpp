#include<bits/stdc++.h>
using namespace std; 
int sum(int a[],int n)
{
    if(n==1)
        return a[0];
    return sum(a,n-1)+a[n-1];
}
int digit(int num)
{
    if(num%10==num)
    return num;
    return (num%10)+digit(num/10);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"sum of array is "<<sum(a,n)<<endl;    
    cout<<"Digit sum"<<endl;
    int num;
    cin>>num;
    cout<<"Digit sum is "<<digit(num)<<endl;
    return 0;
}