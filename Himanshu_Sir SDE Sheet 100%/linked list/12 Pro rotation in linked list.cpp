#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
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


//utility function to rotate list by k times
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
    display(head);
 
    cout<<endl;

    node* newhead = rotateRight(head,2);
    display(newhead);
    //display(head);
    
    return 0;
} 