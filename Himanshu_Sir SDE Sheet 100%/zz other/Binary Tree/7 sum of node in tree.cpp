#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int sumtNode(Node* root)
{
    if( root== NULL)
    {
        return 0;
    }
    return sumtNode(root->left)+ sumtNode(root->right)+ root->data;
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

     root->right->left = new Node(6);
     root->right->right = new Node(7);

    //preorder(root);
    //inorder(root);
    cout<<sumtNode(root)<<"\n";
    return 0;
}
