#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,string> > v={{1000,"thousand"},{100,"hundred"},{90,"ninety"},{80,"eighty"},{70,"seventy"},{60,"sixty"},{50,"fifty"},{40,"fourty"},{30,"thirty"},{20,"twenty"},{10,"ten"}};
    map<int,string> m;
    m = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };
    int n;
    cin>>n;
    string s="";

    for(auto &it:v)
    {
        if(n==0)
            break;
        int a=it.first;
        string b=it.second;

        if(n/a!=0)
        {
            int r=n/a;
            if(r!=1)
                s+=m[r];
            s+=b;
            n%=a;
        }
    }

    if(n)
        s+=m[n];
        cout<<s;
    return 0;
}