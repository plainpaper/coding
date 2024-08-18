#include<bits/stdc++.h>
using namespace std;
 
void print(int num)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}
int main()
{
    // cout<<(12>>2)<<endl;
    // int n;
    // cin>>n;
    // cout<<(1<<n)<<" "<<endl;
    // int num;
    // cin>>num;
    // print(num);
    // int i=0;
    // if(num & (1<<i) !=0)
    // cout<<"set bit"<<endl;
    // else
    //     cout<<"not"<<endl;
    // cout<<"Enter the i"<<endl;
    // cin>>i;
    // print(num | (1<<i));
    // int j;
    // cin>>j;
    // print(num & ~(1<<j));
    int a;
    int b;
    cin>>a;
    cin>>b;
    print(a^b);
    cout<<"right rotation\n";
    cout<<(10>>8);
    cout<<endl;
    return 0;
}