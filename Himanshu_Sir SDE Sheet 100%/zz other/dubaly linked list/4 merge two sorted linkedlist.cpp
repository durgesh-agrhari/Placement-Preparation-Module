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


//merge iterative way
node* merge(node* &head1, node* &head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummyNode = new node(-1);
    node* p3=dummyNode;

    while (p1!=NULL && p2!=NULL)
    {
        if(p1->data < p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while (p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while (p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummyNode->next;
    
}

//merge recursive way
node* mergeRecursive(node* &head1, node* &head2)
{
    //base case
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }

    node* result;
    if(head1->data < head2->data)
    {
        result=head1;
        result->next=mergeRecursive(head1->next,head2);
    }
    else
    {
        result= head2;
        result->next= mergeRecursive(head1,head2->next);
    }
    return result;
}


int main()
{
    node* head1=NULL;
    node* head2=NULL;

    int arr1[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++)
    {
        insertAtTail(head1,arr1[i]);
    }

    int arr2[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++)
    {
        insertAtTail(head2,arr2[i]);
    }

    display(head1);
    display(head2);
    cout<<endl;

    // node* newhead = merge(head1,head2);
    // display(newhead);

    node* newhead = mergeRecursive(head1,head2);
    display(newhead);

    // node *newhead = kappend(head, 3);
    // display(newhead);

    return 0;
}   