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


void printMiddle(node* head)
{
    node* slowptr = head;
    node* fastptr = head;
 
    if (head!=NULL)
    {
        while (fastptr != NULL && fastptr->next != NULL)
        {
            fastptr = fastptr->next->next;
            slowptr = slowptr->next;
        }
        cout<<"The middle element is = "<<slowptr->data;
    }
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
    insertAtTail(head,7);
    display(head);

    //node* newhead = middle(head); 
    //display(newhead);
    printMiddle(head);
    //display(head);

    return 0;
} 


// node* middle(node* head)
// {
//     node* slow = head;
//     node* fast = head;
//     while (fast!=NULL && fast->next!=NULL)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     return slow;
// }

/* Function to get the middle of the linked list*/



                
















                





// #include<bits/stdc++.h>
// using namespace std;

// struct node 
// {
//     int num;                
//     node *nextptr;             
// }*stnode; //node constructed

// void make(int n);                 
// void printMiddle(struct node *stnode);	            
// void print();

 

// void make(int n) //function to create linked list.
// {
//     struct node *frntNode, *tmp;
//     int num, i;
 
//     stnode = (struct node *)malloc(sizeof(struct node));
//     if(stnode == NULL)        
//     {
//         cout<<"Memory can not be allocated";
//     }
//     else
//     {
                                  
//         cout<<"Enter the data for node 1: ";
//         cin>>num;
//         stnode-> num = num;      
//         stnode-> nextptr = NULL; //Links the address field to NULL
//         tmp = stnode;
 
//         for(i=2; i<=n; i++)
//         {
//             frntNode = (struct node *)malloc(sizeof(struct node)); 
 

//             if(frntNode == NULL) "//If frntnode is null no memory cannot be allotted
//             {
//                 cout<<"Memory can not be allocated";
//                 break;
//             }
//             else
//             {
//                 cout<<"Enter the data for node "<<i<<": "; // Entering data in nodes.
//                 cin>>num;
//                 frntNode->num = num;         
//                 frntNode->nextptr = NULL;    
//                 tmp->nextptr = frntNode;     
//                 tmp = tmp->nextptr;
//             }
//         }
//     }
// } 
// void print() // method to display linked list
// {
//     struct node *tmp;
//     if(stnode == NULL)
//     {
//         cout<<"List is empty";
//     }
//     else
//     {
//         tmp = stnode;
//         cout<<"Linked List\t";
//         while(tmp != NULL)
//         {
//             cout<<tmp->num<<"\t";   
//             tmp = tmp->nextptr;                
//         }
//     }
// }
// void printMiddle(struct node *stnode)//function to print middle node of the list.
// {
//     struct node *single_ptr = stnode;
//     struct node *twice_ptr = stnode;
 
//     if (stnode!=NULL)
//     {
//         while (twice_ptr != NULL && twice_ptr->nextptr != NULL)
//         {
//             twice_ptr = twice_ptr->nextptr->nextptr; //moving with twice speed.
//             single_ptr = single_ptr->nextptr;
//         }
//         cout<<"The middle element is "<<single_ptr->num;
//     }
// }

// int main() //Main method
// {
//     int n,num;
		
//     cout<<"Enter the number of nodes: ";
//     cin>>n;
//     make(n);
//     cout<<"\nLinked list data: \n";		
//     print();
//     printMiddle(stnode);
   
//     return 0;
// }
