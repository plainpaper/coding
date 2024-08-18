#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void display(struct node * head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

struct node* reverse(struct node* head)
{
    struct node *fur=head;
    struct node *curr=head;
    struct node *prev=NULL;
    while(curr)
    {
        fur=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fur;
    }
    return prev;
}

struct node* insert_begin(struct node * head,int key)
{
    struct node* temp=new node(key);
    temp->next=head;
    return temp;
}
void insert_end(struct node * head,int key)
{
    struct node* temp=new node(key);
    struct node* first=head;
    cout<<"Value of head in fun "<<head<<endl;
    while(first->next!=0)
    {
        first=first->next;
    }
    first->next=temp;
}
struct node* delete_f(struct node* head)
{
    struct node* temp=head;
    head=head->next;
    free(temp);
    return head;
}

struct node* insert_pos(struct node* head,int pos)
{
    if(pos<0)
    {
        cout<<"Enter the valid position\n";
        return head;
    }
    struct node * temp=new node(123);
    struct node* img=head;
    if(pos==1)
    {
        temp->next=img;
        return temp;
    }
    int count=1;
    struct node* fur=head->next;
    struct node* prev=head;
    while(fur && pos-1>count)
    {
        prev=fur;
        fur=fur->next;
        count++;
    }
    prev->next=temp;
    temp->next=fur;
    return head;
}

struct node* delete_end(struct node* head)
{
    if(head==0)
        return NULL;
    if(head->next==0)
    {
        free(head);
        return NULL;
    }
    struct node* temp=head;
    struct node* temp1=NULL;
    while(temp->next)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
    return head;
}


int search(struct node* head,int key)
{
    if(head==0)
        return -1;
    int cnt=1;
    while(head)
    {
        if(head->data==key)
            return cnt;
        cnt++;   
        head=head->next;
    }
    return -1;
}

int search2(struct node* head,int key)
{
    if(head==0)
        return -1;
    if(head->data==key)
        return 1;
    else
    {
        int res=search2(head->next,key);
        if(res==-1) return -1;
        else
        return res+1;
    }
}

struct node* delete_p(struct node* head,int pos)
{
    if(head==0)
        return NULL;
    if(pos<0)
    {
        cout<<"Enter the valid position\n";
        return head;
    }
    struct node* temp=head;
    if(pos==1)
    {
        head=temp->next;
        cout<<"Deleted node is "<<temp->data<<endl;
        free(temp);
        return head;
    }
    struct node* prev=head;
    struct node* temp1=head->next;
    int cnt=1;
    while(temp1 && pos-1>cnt)
    {
        prev=temp1;
        temp1=temp1->next;
        cnt++;
    }
    cout<<"Deleted node is "<<temp1->data<<endl;
    prev->next=temp1->next;
    free(temp1);
    return head;
}

struct node* reverse_recursion(struct node* curr,struct node* prev)
{
    if(curr==0)
    return prev;
    struct node* next=curr->next;
    curr->next=prev;
    reverse_recursion(next,curr);
}

 struct node* rotate(struct node* head, int k)
    {
        struct node* temp=head;
        struct node* prev=NULL;
        int cnt=1;
        while(k>=cnt)
        {
            temp=head;
            while(temp->next)
            {
                temp=temp->next;
            }
            temp->next=head;
            prev=head;
            head=head->next;
            prev->next=NULL;
            cnt++;
        }
        return head;
    }


int main()
{
    struct node *head=new struct node(12);
    struct node *t=new struct node(11);
    struct node *t1=new struct node(10);
    struct node *t2=new struct node(23);
    struct node *t3=new struct node(14);
    cout<<"Value of head is "<<head<<endl;
    head->next=t;
    t->next=t1;
    t1->next=t2;
    t2->next=t3;
    display(head);
    head=reverse(head);
    display(head);
    head=insert_begin(head,45);
    display(head);
    insert_end(head,78);
    display(head);
    head=delete_f(head);
    display(head);
    head=delete_end(head);
    display(head);
    cout<<"enter the position\n";
    int pos;
    cin>>pos;
    head=insert_pos(head,pos);
    display(head);
    cout<<"Enter the key value\n";
    int key;
    cin>>key;
    int res=search(head,key);
    if(res>0)
    {
        cout<<"present at "<<res<<endl;
    }
    else
        cout<<"Not present\n";
    display(head);
    cout<<"using recursion to search\n";
    int val;
    cin>>val;
    int m=search2(head,val);
    if(m>0)
        cout<<"present at "<<m<<endl;
    else
        cout<<"Not present\n";

    cout<<"delete at given position\n";
    int p;
    cin>>p;
    head=delete_p(head,p);
    display(head);
    cout<<"Recursive reverse\n";
    head=reverse_recursion(head,NULL);
    display(head);
    cout<<"Rotation of liked list\n";
    int k;
    cout<<"Enter the k\n";
    cin>>k;
    head=rotate(head,k);
    display(head);
    return 0;
}