#include<bits/stdc++.h>
using namespace std;
int suma(int n)
{
    int sum;
    if(n==0)
        return 0;
    return suma(n/10)+n%10;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Sum of digit is "<<suma(n);
}