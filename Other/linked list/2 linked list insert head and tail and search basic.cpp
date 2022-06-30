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

    int arr1[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++)
    {
        insertAtTail(head,arr1[i]);
    }
    display(head);
    return 0;
}