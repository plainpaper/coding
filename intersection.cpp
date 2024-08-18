#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
typedef struct node Node;

Node* merge(Node* l1,Node* l2)
{
    if(l1->data > l2->data)
    {
        swap(l1,l2);
    }
    Node* res=l1;
    while(l1 && l2)
    {
        Node* t=NULL;
        while(l1 && l1->data <= l2->data)
        {
            t=l1;
            l1=l1->next;
        }
        t->next=l2;
        swap(l1,l2);
    }
    return res;
}

void display(Node* head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* add(Node* l1,Node* l2)
{
    int sum=0;
    int carry=0;
    Node* d=new node(0);
    Node* res=d;
    while(l1 || l2 || carry)
    {
        if(l1!=0)
        {
            sum+=l1->data;
            l1=l1->next;
        }
        if(l2!=0)
        {
            sum+=l2->data;
            l2=l2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node* noe=new node(sum%10);
        d->next=noe;
        d=noe;
    }
    return res->next;
}

Node* intersection(Node* l1,Node* l2)
{
    map<Node*,int> m;
    while(l1)
    {
        m[l1]++;
        l1=l1->next;
    }
    while(l2)
    {
        if(m[l2]==1) return l2;
        l2=l2->next;
    }
    return NULL;
}

int main()
{
    Node* head=new node(12);
    Node* t1=new node(32);
    Node* t2=new node(56);
    Node* t3=new node(89);
    head->next=t1;
    t1->next=t2;
    t2->next=t3;
    display(head);
    Node* head1=new node(10);
    Node* t11=new node(20);
    Node* t22=new node(30);
    Node* t33=new node(40);
    head1->next=t11;
    t11->next=t22;
    t22->next=t33;
    t33->next=t2;
    t2->next=t3;
    display(head1);
    cout<<"Finding intersection point\n";
    // Node* res=merge(head,head1);
    // display(head);
    Node* res=intersection(head,head1);
    if(res==NULL)
        cout<<"NO intersection point\n";
    else
        cout<<"Intersection point is "<<res->data<<endl;
    return 0;
}