// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>


using namespace std;


// int main() {
//     // Write C++ code here
//     string str;
//     getline(cin,str);
//     int l;int r;
//     cin>>l>>r;
//     int hsh[26];
//     for(int i=0;i<26;i++)
//     hsh[i]=0;
//     for(int i=l-1;i<=r-1;i++)
//     {
//         hsh[str[i]-'a']++;
//     }
//     int odcnt=0;
//     for(int i=0;i<26;i++)
//     {
//         if(hsh[i]>0)
//         {
//             if(hsh[i]%2!=0) odcnt++;
//         }
//     }
//     if(odcnt>1) cout<<"not"<<endl;
//     else cout<<"Palan"<<endl;
//     return 0;
// }



// int fun(vector<int> v,int n,int target)
// {
//     int count=0;
//     map<int,int> m;
//     int rem=0;
//     for(int i=0;i<n;i++)
//     {
//         int ar=v[i];
//         rem=target-ar;
//         if(m.find(rem)!=m.end())
//         {
//             count+=m[rem];
//         }
//         m[ar]++;
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     int taget;
//     cin>>taget;
//     cout<<fun(v,n,taget)<<endl;
//     return 0;
// }


// int fun(vector<int> v,int n,int k)
// {
//     int i=0;
//     int j=0;
//     int ma=INT_MIN;
//     int sum=0;
//     while(j<n)
//     {
//         sum=sum+v[j];
//         if(j<k-1)
//         j++;
//         else if(j-i+1==k)
//         {
//             ma=max(ma,sum);
//             sum=sum-v[i];
//             i++;
//             j++;
//         }
//     }
//     return ma;
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     int sum;
//     cin>>sum;
//     int res=fun(v,n,sum);
//     cout<<res<<endl;
//     return 0;
// }



// vector<int> fun(vector<int> v,int n,int k)
// {
//     queue<int> q;
//     int i=0;
//     int j=0;
//     vector<int> res;
//     while(j<n)
//     {
//         if(v[j]<0)
//             q.push(v[j]);
//         if(j<k-1)
//             j++;
//         else if(j-i+1==k)
//         {
//             if(q.empty())
//                 res.push_back(0);
//             else
//                 res.push_back(q.front());
//             if(q.front()==v[i])
//                 q.pop();
//             i++;
//             j++;
//         }
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
//     int k;
//     cin>>k;
//     vector<int> res=fun(v,n,k);
//     for(int i=0;i<res.size();i++)
//     {
//         cout<<res[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }




// vector<int> fun(vector<int> v,int n,int k)
// {
//     queue<int> q;
//     int i=0;
//     int j=0;
//     vector<int> res;
//     while(j<n)
//     {
//         while(!q.empty() && q.front()<v[j])
//         {
//             q.pop();
//         }
//         q.push(v[j]);
//         if(j<k-1)
//             j++;
//         else if(j-i+1==k)
//         {
//             res.push_back(q.front());
//             if(q.front()==v[i])
//                 q.pop();
//             i++;
//             j++;
//         }
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
//     int k;
//     cin>>k;
//     vector<int> res=fun(v,n,k);
//     for(int i=0;i<res.size();i++)
//     {
//         cout<<res[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// void merge(vector<int> &v,int low,int mid,int high)
// {
//     int lsize=mid-low+1;
//     int larr[lsize+1];
//     int rsize=high-mid;
//     int rarr[rsize+1];
//     for(int i=0;i<lsize;i++)
//     {
//         larr[i]=v[low+i];
//     }
//     for(int i=0;i<rsize;i++)
//     {
//         rarr[i]=v[mid+i+1];
//     }
//     rarr[rsize]=larr[lsize]=INT_MAX;
//     int l1=0;
//     int r1=0;
//     for(int i=low;i<=high;i++)
//     {
//         if(larr[l1]<=rarr[r1])
//         {
//             v[i]=larr[l1];
//             l1++;
//         }
//         else
//         {
//             v[i]=rarr[r1];
//             r1++;
//         }
//     }
// }




// void merge_sort(vector<int> &v,int l,int h)
// {
//     if(l!=h)
//     {
//         int mid=(l+h)/2;
//         merge_sort(v,l,mid);
//         merge_sort(v,mid+1,h);
//         merge(v,l,mid,h);
//     }
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     merge_sort(v,0,n-1);
//     for(int i=0;i<n;i++)
//         cout<<v[i]<<" ";
//     return 0;
// }



// void insertion(vector<int> &v)
// {
//     for(int i=1;i<v.size();i++)
//     {
//         int val=v[i];
//         int j=i-1;
//         while(j!=-1 && v[j]>val)
//         {
//             v[j+1]=v[j];
//             j--;
//         }
//         v[j+1]=val;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     insertion(v);
//     for(int i=0;i<n;i++)
//         cout<<v[i]<<" ";
//     return 0;
// }


// void buble(vector<int> &v,int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int flag=0;
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(v[j]>v[j+1])
//             {
//                 flag=1;
//                 int t=v[j];
//                 v[j]=v[j+1];
//                 v[j+1]=t;
//             }
//         }
//         if(!flag)
//         {
//             cout<<"Already sorted\n";
//             return;
//         }
//     }
// }



// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     buble(v,n);
//     for(int i=0;i<n;i++)
//         cout<<v[i]<<" ";
//     return 0;
// }


// int triplet(vector<int> v,int n)
// {
//     const int N=1e5+1;
//     int hsh[N]={0};
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         hsh[v[i]]=1;
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(i!=j)
//             {
//                 int sum=v[i]+v[j];
//                 if(hsh[sum])
//                     count++;
//             }
//         }
//     }
//     return count;
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     int ans=triplet(v,n);
//     cout<<ans<<" "<<endl;
//     return 0;
// }


// int suma(vector<int> v,int n)
// {
//     int sum=0;
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         sum+=v[i];
//         maxi=max(maxi,sum);
//         if(sum<0)
//         sum=0;
//     }
//     return maxi;
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     cout<<suma(v,n)<<endl;
//     return 0;
// }


//using extra space merge two sorted array 
// vector<int> merge(vector<int> v1,vector<int> v2,int n1,int n2)
// {
//     vector<int> ans;
//     int i=0;
//     int j=0;
//     while(i<n1 && j<n2)
//     {
//         if(v1[i]<=v2[j])
//         {
//             ans.push_back(v1[i]);
//             i++;
//         }
//         else
//         {
//             ans.push_back(v2[j]);
//             j++;
//         }
//     }
//     while(i<n1)
//     {
//         ans.push_back(v1[i]);
//         i++;
//     }
//     while(j<n2)
//     {
//         ans.push_back(v2[j]);
//         j++;
//     }
//     return ans;
// }



// int main()
// {
//     int n1;
//     cin>>n1;
//     int n2;
//     cin>>n2;
//     vector<int> v1(n1);
//     for(int i=0;i<n1;i++)
//         cin>>v1[i];
//     vector<int> v2(n2);
//     for(int i=0;i<n2;i++)
//         cin>>v2[i];
//     vector<int> res=merge(v1,v2,n1,n2);
//     for(int i=0;i<res.size();i++)
//     {
//         cout<<res[i]<<" ";
//     }
//     return 0;
// }

//merging two sorted array without using extra space 
// 


// void alter(vector<int> &v,int n)
// {
//     int min=0;
//     int max=n-1;
//     vector<int> a;
//     while(min<=max)
//     {
//         a.push_back(v[max]);
//         a.push_back(v[min]);
//         min++;
//         max--;
//     }
//     for(int i=0;i<n;i++)
//     {
//         v[i]=a[i];
//     }
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     alter(v,n);
//     for(int i=0;i<n;i++)
//         cout<<v[i]<<" ";
//     return 0;
// }

//single liked list some functions

// struct node{
//     int data;
//     struct node * next;
//     node(int val)
//     {
//         data=val;
//         next=0;
//     }
// };

// typedef struct node Node;


// void display(Node* head)
// {
//     while(head)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// Node* reverse(Node *head)
// {
//     Node* fur=head;
//     Node* cur=head;
//     Node* prev=0;
//     while(cur)
//     {
//         fur=fur->next;
//         cur->next=prev;
//         prev=cur;
//         cur=fur;
//     }
//     return prev;
// }


// Node* reverse_rec(Node* cur,Node* prev)
// {
//     if(cur==0)
//     return prev;
//     Node* fur=cur->next;
//     cur->next=prev;
//     return reverse_rec(fur,cur);
// }


// Node* delete_key(Node* head,int key)
// {
//     if(head==0)
//         return 0;
//     if(head->data==key)
//     {
//         Node* t=head;
//         head=head->next;
//         free(t);
//         return head;
//     }
//     Node* prev=head;
//     Node* cur=head->next;
//     while(cur && key!=cur->data)
//     {
//         prev=cur;
//         cur=cur->next;
//     }
//     if(cur==0)
//     {
//         cout<<"doest not exists key\n";
//         return head;
//     }
//     else
//     {
//         prev->next=cur->next;
//         free(cur);
//         return head;
//     }
// }


// int main()
// {
//     Node* head=new node(45);
//     Node* t=new node(89);
//     Node* t1=new node(12);
//     Node* t2=new node(1);
//     head->next=t;
//     t->next=t1;
//     t1->next=t2;
//     display(head);
//     head=reverse(head);
//     display(head);
//     head=reverse_rec(head,0);
//     display(head);
//     int key;
//     cin>>key;
//     head=delete_key(head,key);
//     display(head);
//     return 0;
// }

// double linked list some function

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
//     node(int val)
//     {
//         data=val;
//         left=0;
//         right=0;
//     }
// };

// typedef struct node Node;

// void display(Node* head)
// {
//     while(head)
//     {
//         cout<<head->data<<" ";
//         head=head->right;
//     }
//     cout<<endl;
// }


// Node* reverse(Node* head)
// {
//     if(head==0)
//         return head;
//     Node* t=0;
//     while(head)
//     {
//         t=head->left;
//         head->left=head->right;
//         head->right=t;
//         head=head->left;
//     }
//     return t->left;
// }

// Node* reverse_rec(Node* head,Node* t)
// {
//     if(head==0)
//         return t;
//     t=head->left;
//     head->left=head->right;
//     head->right=t;
//     //cout<<head->data<<" ";
//     t=head;
//     return reverse_rec(head->left,t);
// }


// int main()
// {
//     Node* head=new node(45);
//     Node* t=new node(1);
//     Node* t1=new node(9);
//     Node* t2=new node(8);
//     Node* t3=new node(7);
//     head->left=0;
//     head->right=t;
//     t->left=head;
//     t->right=t1;
//     t1->left=t;
//     t1->right=t2;
//     t2->left=t1;
//     t2->right=t3;
//     t3->left=t2;
//     t3->right=0;
//     display(head);
//     head=reverse(head);
//     display(head);
//     cout<<head<<" "<<endl;
//     head=reverse_rec(head,0);
//     cout<<head<<" "<<endl;
//     // head=reverse(head);
//     display(head);
//     return 0;
// }


// struct node{
//     int data;
//     struct node * next;
//     node(int val)
//     {
//         data=val;
//         next=0;
//     }
// };

// typedef struct node Node;


// void display(Node* head)
// {
//     while(head)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// Node* merge(Node* l1,Node* l2)
// {
//     Node* res=new node(0);
//     Node* ans=res;
//     while(l1 && l2)
//     {
//         if(l1->data<l2->data)
//         {
//             Node* t=new node(l1->data);
//             res->next=t;
//             res=t;
//             l1=l1->next;
//         }
//         else
//         {
//             Node* t=new node(l2->data);
//             res->next=t;
//             res=t;
//             l2=l2->next;
//         }
//     }
//     while(l1)
//     {
//         Node* t=new node(l1->data);
//         res->next=t;
//         res=t;
//         l1=l1->next;
//     }
//     while(l2)
//     {
//         Node* t=new node(l2->data);
//         res->next=t;
//         res=t;
//         l2=l2->next;
//     }
//     return ans->next;
// }

// Node* merge_(Node* l1,Node* l2)
// {
//     if(l1->data > l2->data)
//     {
//         swap(l1,l2);
//     }
//     Node* ans=l1;
//     while(l1 && l2)
//     {
//         Node* t;
//         while(l1 && l1->data < l2->data)
//         {
//             t=l1;
//             l1=l1->next;
//         }
//         t->next=l2;
//         swap(l1,l2);
//     }
//     return ans;
// }


// void detect_loop(Node* head)
// {
//     Node* slow=head;
//     Node* fast=head->next;
//     while(fast && fast->next)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast)
//         {
//             cout<<"loop detected\n";
//             return;
//         }
//     }
//     cout<<"Not detected\n";
// }

// Node* remove(Node* head)
// {
//     map<Node*,bool> m;
//     Node* t=head;
//     Node* prev=0;
//     while(t)
//     {
//         if(m[t]==true)
//         {
//             prev->next=0;
//             return head;
//         }
//         m[t]=true;
//         prev=t;
//         t=t->next;
//     }
// }


// int main()
// {
//     Node* head=new node(3);
//     Node* t=new node(10);
//     Node* t1=new node(13);
//     Node* t2=new node(19);
//     head->next=t;
//     t->next=t1;
//     t1->next=t2;
//     t2->next=t;
//     detect_loop(head);
//     head=remove(head);
//     display(head);
//     Node* l=new node(4);
//     Node* l1=new node(5);
//     Node* l2=new node(8);
//     Node* l3=new node(90);
//     l->next=l1;
//     l1->next=l2;
//     l2->next=l3;
//     display(l);
//     Node* res=merge_(head,l);
//     display(res);
//     return 0;
// }

//pattern priting

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int fun(int x,int y)
// {
//     if(x%y==0)
//         return x;
//     int num=x*10;
//     while(num%y!=0)
//     {
//         num++;
//     }
//     return num;
// }


// int main()
// {
//     int x;
//     cin>>x;
//     int y;
//     cin>>y;
//     cout<<fun(x,y)<<endl;
//     return 0;
// }


// int main()
// {
//     string s;
//     getline(cin,s);
//     unordered_map<char,int> m;
//     for(int i=0;i<s.size();i++)
//         m[s[i]]++;
//     // for(auto val:m)
//     // {
//     //     cout<<val.first<<" "<<val.second<<endl;
//     // }
//     for(int i=0;i<s.size();i++)
//     {
//         if(m[s[i]])
//         {
//             cout<<s[i]<<" "<<m[s[i]]<<" ";
//             m[s[i]]=0;
//         }
//     }
//     return 0;
// }


// void rev(string &s,int i,int n)
// {
//     if(i==n)
//         return;
//     char t=s[i];
//     rev(s,i+1,n);
//     s[n-i-1]=t;
// }


// int main()
// {
//     string s;
//     cin>>s;
//     int l=s.size()-1;
//     int flag=0;
//     for(int i=0;i<=s.size();i++)
//     {
//         if(s[i]!=s[l])
//         {
//             cout<<"Not palandrome\n";
//             flag=1;
//             break;
//         }
//         l--;
//     }
//     if(!flag)
//     cout<<"palandrome\n";
//     rev(s,0,s.size());
//     cout<<s<<endl;
//     return 0;
// }

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// typedef struct node Node;

// void inorder(Node* root)
// {
//     if(root)
//     {
//         inorder(root->left);
//         cout<<root->data<<" ";
//         inorder(root->right);
//     }
// }

// bool check(Node* root,int l,int r)
// {
//     if(root==0)
//         return true;
//     if(root->data<l || root->data > r)
//         return false;
//     return check(root->left,l,root->data) && check(root->right,root->data,r); 
// }

// int main()
// {
//     Node* root=new node(12);
//     Node* t=new node(9);
//     Node* t1=new node(30);
//     Node* t2=new node(3);
//     Node* t3=new node(10);
//     Node* t4=new node(25);
//     Node* t5=new node(40);
//     Node* t6=new node(1);
//     Node* t7=new node(69);
//     root->left=t;
//     root->right=t1;
//     t->left=t2;
//     t->right=t3;
//     t1->left=t4;
//     t1->right=t5;
//     t2->left=t6;
//     t5->right=t7;
//     inorder(root);
//     cout<<endl;
//     if(check(root,INT_MIN,INT_MAX))
//         cout<<"yes it is a binary search tree\n";
//     else
//         cout<<"NOT BST\n";
//     cout<<sizeof(struct node)<<endl;
//     cout<<sizeof(double *)<<endl;
//     return 0;
// }


// // int main()
// // {
// //     int hr;
// //     cin>>hr;
// //     int min;
// //     cin>>min;
// //     float hour=(hr%12 + min/60.0)*30;
// //     float minute=(min%60)*6;
// //     if(abs(hour-minute)>180)
// //     {
// //         float ans=abs(hour-minute);
// //         cout<<ans-180.0<<" ";
// //     }
// //     else
// //     {
// //         float ans=abs(hour-minute);
// //         cout<<ans<<" ";
// //     }
// //     return 0;
// // }


// class human{
//     public:
//     void virtual speak()
//     {
//         cout<<"base class\n";
//     }
// };

// class male: public human{
//     public:
//     void speak()
//     {
//         cout<<"sub class\n";
//     }
// };

// int main()
// {
//     male obj;
//     obj.human::speak();
//     return 0;
// }

// to check set bit 

// int main()
// {
//     int n;
//     cin>>n;
//     int i;
//     cin>>i;
//     if(n>>i & 1)
//     cout<<"set\n";
//     else
//     cout<<"NOT";
//     return 0;
// }

// void merge(vector<int> &v,int l,int mid,int r)
// {
//     int ls=mid-l+1;
//     int larr[ls+1];
//     int rs=r-mid;
//     int rarr[rs+1];
//     for(int i=0;i<ls;i++)
//         larr[i]=v[l+i];
//     for(int i=0;i<rs;i++)
//         rarr[i]=v[mid+i+1];
//     larr[ls]=rarr[rs]=INT_MIN;
//     int left=0;
//     int right=0;
//     for(int i=l;i<=r;i++)
//         if(larr[left]>rarr[right])
//         {
//             v[i]=larr[left];
//             left++;
//         }
//         else
//         {
//             v[i]=rarr[right];
//             right++;
//         }
    
// }

// void merge_sort(vector<int> &v,int low,int high)
// {
//     if(low!=high)
//     {
//         int mid=(low+high)/2;
//         merge_sort(v,low,mid);
//         merge_sort(v,mid+1,high);
//         merge(v,low,mid,high);
//     }
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     merge_sort(v,0,n-1);
//     for(int i=0;i<n;i++)
//         cout<<v[i]<<" ";
//     cout<<endl;
//     return 0;
// }



// const int N=1e6+1;

// vector<bool> isprime(N,1);
// int main()
// {
//     isprime[0]=0;
//     isprime[1]=0;
//     for(int i=2;i<=N;i++)
//     {
//         for(int j=2*i;j<=N;j+=i)
//         {
//             if(isprime[j]!=0)
//             isprime[j]=0;
//         }
//     }
//     int n;
//     cin>>n;
//     if(isprime[n])
//         cout<<"Prime\n";
//     else
//         cout<<"NOT\n";
//     int l;
//     int m;
//     cin>>l>>m;
//     for(int i=l;i<=m;i++)
//         if(isprime[i])
//             cout<<i<<" ";
//     cout<<endl;
//     return 0;
// }

// fibbonaci number normal approach

// int fib(int n)
// {
//     if(n==1)
//         return 1;
//     else if(n==2)
//         return 1;
//     return fib(n-1)+fib(n-2);
// }


// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
//     return 0;
// }


// int fib(int n,vector<int> &dp)
// {
//     if(n==1)
//         return 0;
//     if(n==2)
//         return 1;
//     if(dp[n]!=-1) 
//         return dp[n];
//     return dp[n]=fib(n-1,dp)+fib(n-2,dp);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> dp(n+1,-1);
//     dp[n]=fib(n,dp);
//     cout<<dp[n]<<" ";
//     return 0;
// }

// Gcd 

// int main()
// {
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     while(b)
//     {
//         int res=a%b;
//         a=b;
//         b=res;
//     }
//     cout<<a<<" ";
//     return 0;
// }


// sum of array using recursion 

// int sumarr(vector<int> &v,int n)
// {
//     if(n==0)
//         return v[0];
//     return v[n]+sumarr(v,n-1);
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     cout<<sumarr(v,n-1);
//     return 0;
// }


//sum of natural number using recursion

// int sum(int n)
// {
//     if(n==0)
//         return 0;
//     return n + sum(n-1);
// }

// void sum(int i,int su)
// {
//     if(i<1)
//     {
//         cout<<su<<" ";
//         return;
//     }
//     sum(i-1,su+i);
// }


// int main()
// {
//     int n;
//     cin>>n;
//     //cout<<sum(n)<<endl;
//     sum(n,0);
//     return 0;
// }


// factorial using recursion


// int fact(int n)
// {
//     if(n==1)
//         return 1;
//     return n*fact(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
//     return 0;
// }



// reverese an array using recursion 

// void reverse(vector<int> &v,int i,int n)
// {
//     if(i==n)
//         return;
//     int t=v[i];
//     reverse(v,i+1,n);
//     v[n-i-1]=t;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     reverse(v,0,n);
//     for(int i=0;i<n;i++)
//         cout<<v[i]<<" ";
//     return 0;
// }


// reversing array using another method

// void reverse(vector<int> &v,int i,int n)
// {
//     if(i>=n/2)
//         return;
//     swap(v[i],v[n-i-1]);
//     reverse(v,i+1,n);
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     reverse(v,0,n);
//     for(int i=0;i<n;i++)
//         cout<<v[i]<<" ";
//     return 0;
// }



// bool reverse(vector<int> &v,int i,int n)
// {
//     if(i>=n/2)
//         return 1;
//     if(v[i]!=v[n-i-1])
//         return 0;
//     return reverse(v,i+1,n);
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     if(reverse(v,0,n))
//         cout<<"Palandrome\n";
//     else
//         cout<<"NOT\n";
//     // reverse(v,0,n);
//     // for(int i=0;i<n;i++)
//     //     cout<<v[i]<<" ";
//     return 0;
// }


// checking palandrome without using external stack 
// struct node{
//     int data;
//     struct node* next;
//     node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
// };
// typedef struct node Node;

// void display(Node* head)
// {
//     if(head==0)
//         return;
//     while(head)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// Node* reverse(Node* head)
// {
//     Node* cur=head;
//     Node* prev=0;
//     Node* fur=head;
//     while(cur)
//     {
//         fur=fur->next;
//         cur->next=prev;
//         prev=cur;
//         cur=fur;
//     }
//     return prev;
// }

// bool palandrome(Node* head)
// {
//     Node* slow=head;
//     Node* fast=head->next;
//     while(fast && fast->next)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     slow->next=reverse(slow->next);
//     Node* t=slow->next;
//     while(t)
//     {
//         if(head->data!=t->data)
//             return false;
//         t=t->next;
//         head=head->next;
//     }
//     return true;
// }


// int main()
// {
//     Node* head=new node(1);
//     Node* t=new node(2);
//     //Node* t1=new node(3);
//     Node* t2=new node(2);
//     Node* t3=new node(1);
//     head->next=t;
//     t->next=t2;
//     //t1->next=t2;
//     t2->next=t3;
//     display(head);
//     if(palandrome(head))
//         cout<<"Palandrome\n";
//     else
//         cout<<"Not\n";
//     return 0;
// }

// void printF(int ind,vector<int> &ds,vector<int> v,int n)
// {
//     if(ind>=n)
//     {
//         for(auto i:ds)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     ds.push_back(v[ind]);
//     printF(ind+1,ds,v,n);
//     ds.pop_back();
//     printF(ind+1,ds,v,n);
// }


// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     vector<int> ds;
//     printF(0,ds,v,n);
//     return 0;
// }


int main()
{
    for(int i=1;i<=126;i++)
    {
        char t=i;
        cout<<t<<" ";
    }
    return 0;
}
