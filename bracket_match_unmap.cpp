#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
string isBalanced(string s)
{
    stack<char> st;
    for(char bra:s)
    {
        if(symbols[bra]<0)
            st.push(bra);
        else
        {
            if(st.empty())
                return "NO";
            char top=st.top();
            st.pop();
            if(symbols[top] + symbols[bra] !=0)
                return "NO";
        }
    }
    if(st.empty())
    return "YES";
    return "NO";
}

int main()
{
    string s;
    cin>>s;
    cout<<isBalanced(s)<<endl;
    return 0;
}