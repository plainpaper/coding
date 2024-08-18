#include<bits/stdc++.h>
using namespace std;
char upper(char c)
{
    return 'A'+(c-'a');
}
int main()
{
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(--t)
    // {
    //     string s;
    //     getline(cin,s);
    //     cout<<s<<endl;
    // }
    // double a=100000000;
    // double b=100000000;
    // double c=a*b;
    // cout<<fixed<<setprecision(0)<<c<<endl;
    // set<int> s;
    // s.insert(30);
    // s.insert(40);
    // s.insert(24);
    // s.insert(35);
    // for(int x:s)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // int x=4;
    // int *p;
    // p=&x;
    // cout<<"Addrres of x: "<<&x<<endl;
    // cout<<"Addrres of x: "<<p<<endl;
    while(true)
    {
        string s;
        cin>>s;
        if(s.size() == 0)
        break;
        for(int i=0;i<s.size();i++)
        {
            s[i]=upper(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}