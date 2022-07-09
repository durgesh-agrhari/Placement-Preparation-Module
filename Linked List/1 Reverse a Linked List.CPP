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

//itrative way to reavaerse linked list 
node* reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next =prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node* reversRecursive(node* &head)
{
    //base case (corner case) yadi linked lis empity ho to 
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead = reversRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}


int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,12);
    display(head);

    // node* newhead = reverse(head);
    // display(newhead);

    node* newhead = reversRecursive(head);
    display(newhead);

    return 0;
} 