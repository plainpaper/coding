#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int v){
        data=v;
        next=NULL;
    }
};
typedef struct Node Node;

Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    vector<int> v;
    Node *temp1=head1;
    Node *temp2=head2;
    while(temp1 && temp2)
    {
        if(temp1->data <= temp2->data)
        {
            v.push_back(temp1->data);
            temp1=temp1->next;
        }
        else
        {
            v.push_back(temp2->data);
            temp2=temp2->next;
        }
    }
    if(temp1!=NULL)
    {
        while(temp1)
        {
            v.push_back(temp1->data);
            temp1=temp1->next;
        }
    }
    if(temp2!=NULL)
    {
        while(temp2)
        {
            v.push_back(temp2->data);
            temp2=temp2->next;
        }
    }
    Node *head=new Node(v[0]);
    Node *temp=head;
    //cout<<v[0]<<" ";
    for(int i=1;i<v.size();i++)
    {
        //cout<<v[i]<<" ";
        Node *new_node=new Node(v[i]);
        temp->next=new_node;
        temp=new_node;
    }
    cout<<endl;
    return head;
}

void display(Node *head)
{
    if(head==0)
    return;
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head1=new Node(26);
    Node *head2=new Node(30);
    Node *head3=new Node(36);
    Node *head4=new Node(89);
    Node *head5=new Node(490);
    Node *head6=new Node(700);
    head1->next=head2;
    head2->next=head3;
    head3->next=head4;
    head4->next=head5;
    head5->next=head6;
    Node *head11=new Node(1);
    Node *head22=new Node(734);
    Node *head33=new Node(890);
    Node *head44=new Node(4523);
    Node *head55=new Node(32234);
    Node *head66=new Node(032235);
    head11->next=head22;
    head22->next=head33;
    head33->next=head44;
    head44->next=head55;
    head55->next=head66;
    Node* res=sortedMerge(head1,head11);
    display(res);
    return 0;
}