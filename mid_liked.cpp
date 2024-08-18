// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
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
    //cout<<"dsfre";
    cout<<endl;
}

struct node* find(struct node* head)
{
    //cout<<"sdfs";
    if(head==0)
    return 0;
    struct node* fast=head->next;
    struct node* slow=head;
    //cout<<"sds";
    while(fast)
    {
        slow=slow->next;
        if(fast->next!=0)
        fast=fast->next->next;
        else
        fast=fast->next;
    }
    return slow;
}

int main()
{
    struct node *head=new struct node(12);
    struct node *t=new struct node(11);
    struct node *t1=new struct node(10);
    struct node *t2=new struct node(23);
    struct node *t3=new struct node(14);
    struct node *t4=new struct node(50);
    //struct node *t5=new struct node(34);
    head->next=t;
    t->next=t1;
    t1->next=t2;
    t2->next=t3;
    t3->next=t4;
    //t4->next=t5;
    display(head);
    //cout<<"ad\n";
    struct node* res=find(head);
    cout<<res->data<<endl;
    return 0;
}