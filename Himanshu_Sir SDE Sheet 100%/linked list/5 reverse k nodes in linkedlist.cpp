//O(N) TC
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

//recursive way
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

//reverse k node 
node* reversek(node* &head,int k)
{
    node* prevptr = NULL;
    node* currptr=head;
    node* nextptr;

    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next= prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr!= NULL)
    {
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}

node* rotateRight(node* head,int k) {
    if(head == NULL||head->next == NULL)
    {
        return head;
    }    
    for(int i=0;i<k;i++) 
    {
        node* temp = head;
        while(temp->next->next != NULL){ 
        temp = temp->next;
        }

        node* end = temp->next;
        temp->next = NULL;
        end->next = head;
        head = end;
    }
    return head;
}


int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    cout<<endl;

    // node* newhead = reverse(head);
    // display(newhead);

    // node* newhead = reversRecursive(head);
    // display(newhead);

    int k=2;
    node* newhead = reversek(head,k);
    display(newhead);
    return 0;
}