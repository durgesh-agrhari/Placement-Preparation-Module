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

bool isPalindrome(node* head) {
    vector<int> arr;
    while(head != NULL) {
        arr.push_back(head->data);
        head = head->next;
    }
    for(int i=0;i<arr.size()/2;i++){ 
        if(arr[i] != arr[arr.size()-i-1])
        {
            return false;
        }
    }   
    return true;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,1);
    display(head);

    cout<<"bool = "<<isPalindrome(head)<<endl;
    isPalindrome(head)? cout<<"True" : cout<<"False";    
    //display(head);
    
    return 0;
} 