#include<bits/stdc++.h>
using namespace std;

int main()
{
    int top=-1,n;
    cout<<"Enter the size of stack\n";
    cin>>n;
    int vec[n];
    cout<<"Enter the elements for an stack\n";
    for(int i=0;i<n;i++)
    cin>>vec[++top];
    while(top>=0)
    cout<<" "<<vec[top--];
    return 0;
}