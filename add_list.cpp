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
    int carry=0;
    Node* d=new node(0);
    Node* res=d;
    while(l1 || l2 || carry)
    {
        int sum=0;
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

int main()
{
    Node* head=new node(2);
    Node* t1=new node(3);
    Node* t2=new node(4);
    Node* t3=new node(5);
    head->next=t1;
    t1->next=t2;
    t2->next=t3;
    display(head);
    Node* head1=new node(3);
    Node* t11=new node(5);
    Node* t22=new node(5);
    Node* t33=new node(8);
    head1->next=t11;
    t11->next=t22;
    t22->next=t33;
    display(head1);
    Node* ans=add(head,head1);
    display(ans);
    return 0;
}