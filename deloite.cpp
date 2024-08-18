#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter the size of array\n";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the elements for an array\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k=0;
    while(k<n)
    {
        if(a[k]==a[k+1])
        {
            a[k]=a[k]+1;
            for(int j=k+1;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            k=0;
            cout<<"Iteration\n";
        for(int i=0;i<n;i++)
        cout<<" "<<a[i];
        cout<<endl;
        }
        else
        {
            k=k+1;
        }
    }
    cout<<"result is "<<n<<endl;
    return 0;
}