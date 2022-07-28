/*
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *right,*left;

	
};
node* newnode(int x)
{
	node *temp;
	temp=new node;
	temp->data=x;
	temp->right->left=NULL; 
	return temp;
}
void traverse(node *root)
{
	if(root!=NULL)
	{
		traverse(root->left);
		cout<<root->data<<endl;
		traverse(root->right);
	}
	else
	{
		root=newnode(-1);
		cout<<root->data<<endl;
	}
	
}
int main()
{
	node *root;
	root=newnode(222);
	root->left=newnode(45342);
	root->left->left=newnode(242);
	root->left->right=newnode(2231);
	root->right=newnode(23222);
	root->right->left=newnode(245367);
	root->right->right=newnode(2412);
	traverse(root);
	return 0;
}
*/
// C++ program to make an extended binary tree 
#include <bits/stdc++.h> 
using namespace std; 
  
// A Tree node 
struct Node { 
    int key; 
    struct Node *left, *right; 
}; 
  
// Utility function to 
// create a new node 
Node* newNode(int key) 
{ 
    Node* temp = new Node; 
    temp->key = key; 
    temp->left = temp->right = NULL; 
    return (temp); 
} 
  
// Function for inorder traversal 
void traverse(Node* root) 
{ 
    if (root != NULL) { 
        traverse(root->left); 
        cout << root->key << " "; 
        traverse(root->right); 
    } 
    else { 
  
        // Making external nodes 
        root = newNode(-1); 
        cout << root->key << " "; 
    } 
} 
  
// Driver code 
int main() 
{ 
    Node *root;
	root=newNode(222);
	root->left=newNode(45342);
	root->left->left=newNode(242);
	root->left->right=newNode(2231);
	root->right=newNode(23222);
	root->right->left=newNode(245367);
	root->right->right=newNode(2412);
	traverse(root);
	return 0;
} 


