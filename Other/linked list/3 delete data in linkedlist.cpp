#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    //esame data pointer jo hai o next data ko point kar raha hai so data type jo hai o pointer(node*) hoga 
    node* next;

    //constracter
    node(int val)
    {
        data = val;
        next=NULL;

    }
};

// & reference ka use tb karate hia jab value ko modifi karana ho tab
void insertAthead(node* &head, int val)
{
    node* n = new node(val);
    n->next=head;
    head= n;
}

// & reference ka use tb karate hia jab value ko modifi karana ho tab
void insertAtTail(node* &head, int val)
{
    node* n= new node(val);
    node* temp = head;

    if(head == NULL)
    {
        head = n;
        return;
    }
    while( temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    
}

//serch linkedlist
bool search(node* head, int key)
{
    node* temp = head;
    while (temp!=NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
    
}

//delete only first element
void deleteAthead(node* &head)
{
    node* todelete = head;
    head = head->next;

    delete todelete;
}

//delete element middle and last element
void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    else if(head->next==NULL)
    {
        deleteAthead(head);
        return;
    }
    node* temp = head;
    while (temp->next->data!= val)
    {
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
    
}

//display data yah & ka use nahi hoga because data modifi nahi ho raha ahi yaha
void display(node* head)
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<< "NULL" <<endl;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,12);  
    display(head);

    insertAthead(head,5);
    display(head);

    cout<<search(head,51)<<endl;

    deletion(head, 1);
    deleteAthead(head);
    display(head);
    return 0;
}