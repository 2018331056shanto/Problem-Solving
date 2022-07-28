
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *left,*right;
};
node *newnode(int data)
{
	node *temp;
	temp->val=data;
	temp->left=temp->right=NULL;
	return temp;
}

bool search(node *root,int data)
{
	if(root==NULL)
		return false;
	if(root->val==data)
		return true;
	bool res1=search(root->left,data);
	bool res2=search(root->right,data);
	return res1||res2;

}
int main()
{
	node *root;
	root=newnode(43);
	root->left=newnode(2422);
	root->right=newnode(223);
	root->left->right=newnode(2352);
	root->right->right=newnode(23);
	int data=23;
	if(search(root,data))
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;


}

/*
// C++ program to check if a node exists 
// in a binary tree 
#include <iostream> 
using namespace std; 
  
// Binary tree node 
struct Node { 
    int data; 
    struct Node *left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
  
// Function to traverse the tree in preorder 
// and check if the given node exists in it 
bool ifNodeExists(struct Node* node, int key) 
{ 
    if (node == NULL) 
        return false; 
  
    if (node->data == key) 
        return true; 
  
    /* then recur on left sutree *
 
    bool res1 = ifNodeExists(node->left, key); 
  
    
 /* now recur on right subtree 
    bool res2 = ifNodeExists(node->right, key); 
  
    return res1 || res2; 
} 
  
// Driver Code 
int main() 
{ 
    struct Node* root = new Node(0); 
    root->left = new Node(1); 
    root->left->left = new Node(3); 
    root->left->left->left = new Node(7); 
    root->left->right = new Node(4); 
    root->left->right->left = new Node(8); 
    root->left->right->right = new Node(9); 
    root->right = new Node(2); 
    root->right->left = new Node(5); 
    root->right->right = new Node(6); 
  
    int key = 4; 
  
    if (ifNodeExists(root, key)) 
        cout << "YES"; 
    else
        cout << "NO"; 
  
    return 0; 
} 
*/