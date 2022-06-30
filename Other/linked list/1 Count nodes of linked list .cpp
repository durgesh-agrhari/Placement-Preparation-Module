//not good code
// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head)
    {
        int count = 0;  
        
        //using a pointer for the linked list.
        struct Node* current = head; 
        
        //using a loop to count nodes until we get null in link part of node.
        while (current != NULL)
        {
            //updating counter.
            count++;
            
            //updating pointer to the next node.
            current = current->next;
        }
        
        //returning the number of nodes.
        return count;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.getCount(head) << endl;
    }
    return 0;
}  // } Driver Code Ends









/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

// class Solution
// {
//     public:
//     //Function to count nodes of a linked list.
//     int getCount(struct Node* head){
    
//         //Code here
    
//     }
// };