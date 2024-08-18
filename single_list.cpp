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

bool detect(Node* head)
{
    if(head==0)
    return false;
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=0 && fast->next!=0)
    {
        if(slow==fast) return true;
        slow=slow->next;
        fast=fast->next->next;
    }
    return false;
}

void remove(Node* head)
{
    unordered_map<Node*,int>mp;
    Node* temp=head;
    Node* cur=NULL;
    while(temp)
    {
        if(mp[temp]==1) 
            break;
        cur=temp;
        mp[temp]++;
        temp=temp->next;
    }
    cur->next=0;
    //return head;
}


int main()
{
    Node* head=new node(45);
    Node* t=new node(78);
    Node* t1=new node(38);
    Node* t2=new node(56);
    Node* t3=new node(59);
    head->next=t;
    t->next=t1;
    t1->next=t2;
    t2->next=t3;
    t3->next=t2;
    cout<<detect(head)<<endl;
    remove(head);
    cout<<endl;
    cout<<detect(head)<<endl;
    return 0;
}