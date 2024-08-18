#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void display_front(struct node* head)
{
    if(head==0)
        return ;
    struct node * temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
}
void display_reverse(struct node* head)
{
    if(head==0)
        return;
    struct node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->left;
    }
    cout<<endl;
}

struct node* insert_front(struct node* head)
{
    struct node* temp1=new node(70);
    head->left=temp1;
    temp1->right=head;
    return temp1;
}

void insert_end(struct node* head)
{
    struct node* temp=new node(80);
    struct node* t=head;
    while(t->right)
    {
        t=t->right;
    }
    t->right=temp;
    temp->left=t;
}

struct node* reverse(struct node* head)
{
    struct node* prev=NULL;
    struct node* cur=head;
    while(cur)
    {
        prev=cur->left;
        cur->left=cur->right;
        cur->right=prev;
        cur=cur->left;
    }
    return prev->left;
}

struct node* delete_p(struct node* head,int pos)
{
    if(head==0)
        return NULL;
    if(pos<0)
        {
            cout<<"Enter  the valid position\n";
            return head;
        }
    if(pos==1)
    {
        struct node* temp=head;
        cout<<"Deleted node is "<<temp->data<<endl;
        temp->right->left=NULL;
        free(temp);
        return temp->right;
    }
    struct node* cur=head->right;
    struct node* prev=head;
    int cnt=1;
    while(cur && pos-1>cnt)
    {
        prev=cur;
        cur=cur->right;
        cnt++;
    }
    cout<<"Deleted node is "<<cur->data<<endl;
    if(cur->right!=0)
    {
        cur->right->left=prev;
        prev->right=cur->right;
        free(cur);
    }
    else
    {
        prev->right=NULL;
        free(cur);
    }
    return head;
}

struct node* delete_head(struct node* head)
{
    if(head->right==0 && head->left==0)
        return NULL;
    struct node* temp=head;
    temp->right->left=NULL;
    free(temp);
    return head->right;
}

int main()
{
    struct node* head=new node(10);
    struct node* t=new node(20);
    struct node* t1=new node(30);
    struct node* t2=new node(40);
    struct node* t3=new node(50);
    struct node* t4=new node(60);
    head->right=t;
    t->left=head;
    t->right=t1;
    t1->left=t;
    t1->right=t2;
    t2->left=t1;
    t2->right=t3;
    t3->left=t2;
    t3->right=t4;
    t4->left=t3;
    display_front(head);
    display_reverse(t4);
    head=insert_front(head);
    display_front(head);
    insert_end(head);
    cout<<"insert end\n";
    display_front(head);
    head=reverse(head);
    display_front(head);
    cout<<"delete given position\n";
    int pos;
    cin>>pos;
    head=delete_p(head,pos);
    display_front(head);
    cout<<"Deleting the head of dll\n";
    head=delete_head(head);
    display_front(head);
    return 0;
}