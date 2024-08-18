#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        right=left=NULL;
    }
};

// struct node * newnode(int idata)
// {
//     struct node* node = new struct node();
//     node->data=idata;
//     node->left=NULL;
//     node->right=NULL;
//     return node;
// }
void display(struct node * root)
{
    if(root==0)
        return;
    cout<<" "<<root->data;
    display(root->left);
    display(root->right);
}
void kdis(struct node* root,int k)
{
    if(root==0)
    return;
    if(k==0)
        cout<<" "<<root->data;
    else
    {
    kdis(root->left,k-1);
    kdis(root->right,k-1);
    }
}
int high(struct node* root)
{
    int count=0;
    if(root==0)
        return 0;
    count = count + max(high(root->left),high(root->right))+1;
    return count;
}
int maxi(struct node* root)
{
    if(root->left==0 && root->right==0)
       return root->data;
    int cur=root->data;
    int large=maxi(root->left);
    if(cur<large)
    cur=large;
    int large1=maxi(root->right);
    if(cur<large1)
    cur=large1;
    return cur;
}
void level(struct node* root)
{
    queue<struct node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        //cout<<"bfs";
        struct node* curr=q.front();
        q.pop();
        cout<<" "<<curr->data;
        if(curr->left!=0)
        {
            q.push(curr->left);
        }
        if(curr->right!=0)
        {
            q.push(curr->right);
        }
        //cout<<"Level ";
    }
}
void dfs(struct node* root)
{
    stack<struct node*> s;
    struct node* cur=root;
    while(cur!=0 || s.empty()==false)
    {
        //cout<<"level";
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

void inorder(struct node* root)
{
    if(root==0)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void inorder_inverse(struct node* root)
{
    if(root==0)
        return;
    inorder_inverse(root->right);
    cout<<root->data<<" ";
    inorder_inverse(root->left);
}

void findka(struct node* root,vector<int> &k)
{
    if(root==0)
        return;
    findka(root->right,k);
    k.push_back(root->data);
    findka(root->left,k);
}

int main()
{
    struct node* root=new node(300);
    struct node* temp=new node(200);
    struct node* temp1=new node(150);
    struct node* temp2=new node(250);
    struct node* temp3=new node(500);
    struct node* temp4=new node(350);
    struct node* temp5=new node(600);
    root->left=temp;
    root->right=temp3;
    temp3->left=temp4;
    temp3->right=temp5;
    temp->left=temp1;
    temp->right=temp2;
    cout<<"Preorder dispaly\n";
    display(root);
    cout<<endl;
    cout<<"Inorderd traversal\n";
    inorder(root);
    cout<<endl;
    cout<<"Display at kth distance\n";
    int k=2;
    kdis(root,k);
    cout<<endl;
    cout<<"height of tree is "<<high(root)<<endl;
    //int ch,ele;
    // while(1)
    // {
    //     cout<<"1.create left node\n";
    //     cout<<"2.create right node\n";
    //     cout<<"3.Stop creating\n";
    //     cout<<"Enter your choice\n";
    //     cin>>ch;
    //     switch(ch)
    //     {
    //         case 1:
    //             cout<<"Enter the value for node\n";
    //             cin>>ele;
    //             struct node* temp=newnode(ele);
    //             root->left=temp;
    //     }
    // } 
    cout<<"maximun of binary tree is "<<maxi(root)<<endl;
    cout<<"Level order display bfs\n";
    level(root);
    cout<<endl;
    cout<<"dfs traversal\n";
    dfs(root);
    cout<<"inverse traversal\n";
    inorder_inverse(root);
    cout<<endl;
    cout<<"enter the k vlaue\n";
    int ka;
    cin>>ka;
    vector<int> v;
    findka(root,v);
    cout<<v[ka-1]<<" "<<endl;
    return 0;
}