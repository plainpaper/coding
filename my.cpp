#include<bits/stdc++.h>

using namespace std;

int myfunction(int n,int a[])
{
    int flag=0;
    int result=-404;
    for(int i=0;i<n;i++)
        if(a[i]==a[i+1])
            flag=1;
    if(!flag)
        return n;
    else
    {
        //int count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                //count++;
                a[i]=a[i]+1;
                for(int j=i+1;j<n;j++)
                    a[j]=a[j+1];
                n=n-1;
            }
        }
        cout<<"Iteration\n";
        for(int i=0;i<n;i++)
        cout<<" "<<a[i];
        cout<<endl;
        result=myfunction(n,a);
    }
    return result;
}

int main()
{
    cout<<"Enter the size of array\n";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the elements for an array\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans = myfunction(n,a);
    cout<<"Result is "<<ans<<endl;
    /*int k=0;
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
        }
        else
        {
            k=k+1;
        }
    }
    cout<<"result is "<<n<<endl;*/
    return 0;
}