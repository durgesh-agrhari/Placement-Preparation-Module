//0(n+m    ) tc 
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
} 

void insertAtTail(node* &head, int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head)
{
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

void evenAfterOdd(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;
    while (odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd = odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }
}


int main()
{
    node* head=NULL;
    int arr1[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++)
    {
        insertAtTail(head,arr1[i]);
    }
    display(head);
    
    evenAfterOdd(head);
    display(head);
    return 0;
}   