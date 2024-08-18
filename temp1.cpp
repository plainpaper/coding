// #include<bits/stdc++.h>
// using namespace std;

// void convert(int n)
// {
//     for(int i=10;i>=0;i--)
//     {
//         cout<<((n>>i)&1)<<" ";
//     }
//     cout<<endl;
// }


// int main()
// {
//     int n;
//     cin>>n;
//     convert(n);
//     int i;
//     cin>>i;
//     n=(1<<(i-1)) | n;
//     convert(n);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// struct node{
//     char data;
//     struct node* next;
//     node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
// };
// typedef struct node Node;

// Node* reverse(Node* head,Node* prev)
// {
//     if(head==0)
//         return prev;
//     Node* cur=head->next;
//     head->next=prev;
//     reverse(cur,head);
// }

// bool palan(Node* head)
// {
//     Node* slow=head;
//     Node* fast=head->next;
//     while(fast && fast->next)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     slow->next=reverse(slow->next,0);
//     slow=slow->next;
//     while(slow)
//     {
//         if(head->data!=slow->data)
//             return false;
//         slow=slow->next;
//         head=head->next;
//     }
//     return true;
// }

// int main()
// {
//     Node* head=new node('c');
//     Node* t=new node('h');
//     Node* t1=new node('a');
//     Node* t2=new node('h');
//     Node* t3=new node('c');
//     Node* t4=new node('r');
//     head->next=t;
//     t->next=t1;
//     t1->next=t2;
//     t2->next=t3;
//     t3->next=t4;
//     cout<<palan(head);
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     for(int i=0;i<n;i++)
//     {
//         int min=i;
//         int flag=0;
//         for(int j=i+1;j<n;j++)
//         {
//             if(v[min]>v[j])
//             {
//                 min=j;
//                 flag=1;
//             }
//         }
//         if(i!=min)
//             swap(v[min],v[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;


// vector<int> nge(vector<int> v,int n)
// {
//     stack<int> st;
//     vector<int> res(n);
//     //cout<<"asfe";
//     for(int i=0;i<n;i++)
//     {
//         while(!st.empty() && v[i]>v[st.top()])
//         {
//             res[st.top()]=i;
//             st.pop();
//             //cout<<"aswweee";
//         }
//         st.push(i);
//     }
//     while(!st.empty())
//     {
//         res[st.top()]=-1;
//         st.pop();
//     }
//     return res;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     vector<int> res=nge(v,n);
//     for(int i=0;i<n;i++)
//     {
//         if(res[i]!=-1)
//             cout<<v[res[i]]<<" ";
//         else
//             cout<<"-1 ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int sum(int ans,int i)
// {
//     //i=i-1;
//     int a=ans;
//     i--;
//     while(i)
//     {
//         ans=ans+a;
//         i--;
//     }
//     return ans;
// }


// int fact(int n)
// {
//     int ans=1;
//     for(int i=n;i>1;i--)
//     {
//         ans=sum(ans,i);
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fact(n);
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// const double eps=1e-6;

// int main()
// {
//     double n;
//     cin>>n;
//     double low=0;
//     double high=n;
//     while(high-low>eps)
//     {
//         double mid=(high+low)/2;
//         if(mid*mid>n)
//             high=mid;
//         else
//             low=mid;
//     }
//     cout<<low<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;


class A{
    public:
    A()
    {
        cout<<"Constructor A"<<endl;
    }
    virtual void show()
    {
        cout<<"ShowA\n";
    }
};

class B:public A{
    public:
    B(){
        cout<<"Constructor B"<<endl;
    }
    void show()
    {
        cout<<"ShowB\n";
    }
};

int main()
{
    B b;
    b.A::show();
    return 0;
}



