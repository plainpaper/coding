#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node * newnode(int idata)
{
    struct node* node = new struct node();
    node->data=idata;
    node->left=NULL;
    node->right=NULL;
    return node;
}
void dfs(struct node* root)
{
    stack<struct node*> s;
    struct node* cur=root;
    while(cur!=0 || s.empty()==false)
    {
        while(cur!=0)
        {
            s.push(cur);
            cur=cur->left;
        }
        cur=s.top();
        s.pop();
        cout<<" "<<cur->data;
        cur=cur->right;
    }
}
void preorder(struct node* root)
{
    stack<struct node*> st;
    st.push(root);
    while(st.empty()==false)
    {
        struct node* cur=st.top();
        cout<<cur->data<<" ";
        st.pop();
        if(cur->right!=0)
            st.push(cur->right);
        if(cur->left!=0)
            st.push(cur->left);
    }
}
bool search(struct node* root,int x)
{
    if(root==0)
        return false;
    else if(root->data==x)
        return true;
    else if(x>root->data)
        return search(root->right,x);
    else
        return search(root->left,x);
}
int main()
{
    struct node* root=newnode(300);
    struct node* temp=newnode(150);
    struct node* temp1=newnode(400);
    struct node* temp2=newnode(350);
    struct node* temp3=newnode(500);
    struct node* temp4=newnode(60);
    struct node* temp5=newnode(200);
    root->left=temp;
    root->right=temp1;
    temp1->left=temp2;
    temp1->right=temp3;
    temp->left=temp4;
    temp->right=temp5;
    cout<<"dfs traversal inorder\n";    
    dfs(root);
    cout<<endl;
    cout<<"preorder traversal\n";
    preorder(root);
    cout<<"BST searching\n";
    
    int x;
    cout<<"Enter the value for x\n";
    cin>>x;
    bool val;
    val=search(root,x);
    if(val)
    {
        cout<<"element is present\n";
    }
    else
        cout<<"Not present\n";
    return 0;
}