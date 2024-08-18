#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
typedef struct node* Node;
int main()
{
    cout<<"Construction of bst\n";
    cout<<"Enter the value for root node\n";
    int val;
    cin>>val;
    Node root=new node(val);
    Node temp=root;
    int ch=0;
    while(true)
    {
        cout<<"1.create left child for "<<temp->data<<endl;
        cout<<"2.create right child for "<<temp->data<<endl;
        cout<<"3.stop\n";
        cout<<"enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1: 
                cout<<"Enter the value between "<<endl; 
        }
    }
    return 0;
}