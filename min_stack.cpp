#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<pair<int,int>> st;
    int ch;
    while(1)
    {
        cout<<"1.push\n";
        cout<<"2.top\n";
        cout<<"3.pop\n";
        cout<<"4.min ele\n";
        cout<<"5.exit\n\n";
        cout<<"Enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the element for stack\n";
                int ele;
                cin>>ele;
                if(st.empty())
                    st.push({ele,ele});
                else
                {
                if(st.top().second<ele)
                {
                    st.push({ele,st.top().second});
                }
                else
                {
                    st.push({ele,ele});
                }
                }
                break;
            case 2:
                cout<<"Top of the element is "<<st.top().first;
                cout<<endl;
                break;
            case 3:
            if(st.empty())
                cout<<"Empty......\n";
            else
            {
                cout<<"The poped element is "<<st.top().first;
                st.pop();
                cout<<endl;
            }
                break;
            case 4:
                if(st.empty())
                    cout<<"empty......\n";
                else
                {
                    cout<<"the minimun element is "<<st.top().second;
                    cout<<endl;
                }
                break;
            case 5:
                return 0;
            default :
                cout<<"Invalid choice\n";
        }
    }
    return 0;
}