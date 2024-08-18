// Online C++ compiler to run C++ program online
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

vector<int> reverseLevelOrder(node *root)
{
    // code here
    vector<int> v;
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        v.push_back(temp->data);
        //cout<<temp->data<<" ";
        q.pop();
        if(temp->right)
        {
            q.push(temp->right);
        }
        if(temp->left)
        {
            q.push(temp->left);
        }
    }
    reverse(v.begin(),v.end());
    return v;
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
   // temp->left=temp1;
    //temp->right=temp2;
    vector<int> res=reverseLevelOrder(root);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}