#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // string a1;
    // cin>>a1;
    // if(a1==s)
    //     cout<<"Eqaul"<<endl;
    // else
    //     cout<<"Not"<<endl;
    stack<char> sa;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        sa.push(s[i]);
        else if(s[i]==')')
        {
            if(sa.empty())
            {
                cout<<"Not matched"<<endl;
                return 0;
            }
        sa.pop();
        }
    }
    if(sa.empty()==true)
        cout<<"matched"<<endl;
    else
        cout<<"not"<<endl;
    // string a1;
    // int i=0;
    // int i=0;
    // int flag=1;
    // while(sa.empty()==false)
    // {
    //     if(s[i]!=sa.top())
    //         flag=0;
    //     sa.pop();
    //     i++;
    // }
    // cout<<endl;
    // if(flag)
    //     cout<<"Palan"<<endl;
    // else
    //     cout<<"Not"<<endl;
    return 0;
}