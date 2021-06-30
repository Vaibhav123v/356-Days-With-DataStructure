#include<iostream>
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
void inorder_traversal(struct Node* node)
{
    if (node==NULL)
    {
        return;
    }

    inorder_traversal(node->left);
    cout<<node->data<<" ";
    inorder_traversal(node->right);
}
void preorder_traversal(struct Node* node)
{
   if(node==NULL)
   {
       return;
   }
   cout<<node->data<<" ";
   preorder_traversal(node->left);
   preorder_traversal(node->right);

   
}
void postorder_traversal(struct Node* node)
{
   if(node==NULL)
   {
       return;
   }
   postorder_traversal(node->left);
   postorder_traversal(node->right);
   cout<<node->data<<" ";
}


int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right =  new Node(7);
    cout << "\nInorder traversal of binary tree is \n";
    inorder_traversal(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    postorder_traversal(root);

    cout << "\nPreorder traversal of binary tree is \n";
    preorder_traversal(root);
    return 0;
}