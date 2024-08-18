#include<bits/stdc++.h>
#include<strings.h>
using namespace std;

int main()
{
    string a,b;
    cout<<"Enter the string\n";
    cin>>a;
    cout<<"Enter the string\n";
    cin>>b;
    int sum1=0,sum2=0;
    int temp1=1,temp2=1;;
    cout<<"Size "<<a.size()<<endl;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]=='1')
            {
                
                sum1 += temp1;
            }
            temp1=temp1*2;
        }
        //cout<<"Sum "<<sum1<<endl;
        for(int i=b.size()-1;i>=0;i--)
        {
            if(b[i]=='1')
            {
                sum2 += temp2;
            }
            temp2=temp2*2;
        }
        int res=sum1+sum2;
        //string ans;
        stack<char> st;
        if(res==1)
        {
        st.push('1');
        while(st.empty()==false)
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        }
        int gfh;
        while(res)
        {
            gfh=res%2;
            if(gfh==1)
            st.push('1');
            else
            st.push('0');
            res=res/2;
        }
        while(st.empty()==false)
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        // int c=ans.size()-1;
        // for(int i=0;i<ans.size()/2;i++)
        // {
        //     char tempc=ans[i];
        //     ans[i]=ans[c];
        //     ans[c]=tempc;
        //     c--;
        // }
        // cout<<"res is "<<ans<<endl;
}