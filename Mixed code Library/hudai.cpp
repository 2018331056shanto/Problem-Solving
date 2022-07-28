//tree using linked list
/*#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *left,*right;

};
node *newnode(int val)
{
	node *temp;
	temp=new node;
	temp->val=val;
	temp->left=temp->right=NULL;
	return temp;
}
void print(node *root)
{
	cout<<root->left->val<<endl;
	cout<<root->right->val<<endl;
	cout<<root->val<<endl;

}

int main()
{
	node *root;
	root=newnode(4);
	root->left=newnode(22);
	root->right=newnode(21);
	root->left->right=newnode(213);
	root->left->left=newnode(9);
	root->right->left=newnode(90);
	print(root); 
	return 0;
}
*/

//extended binary tree
/*
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *left,*right;

};
node *newnode(int val)
{
	node *temp;
	temp=new node;
	temp->val=val;
	temp->left=temp->right=NULL;
	return temp;
}
void treetraversal(node *root)
{
	if(root!=NULL)
	{
		treetraversal(root->left);
		cout<<root->val<<endl;
		treetraversal(root->right);

	}
	else
		
		{
			root=newnode(-1);
	cout<<root->val<<endl;
}


}
int main()
{
	node *root;
	root=newnode(23);
	root->left=newnode(2);
	root->right=newnode(32);
	root->left->right=newnode(231);
	root->left->left=newnode(83);
	root->right->left=newnode(77);
	root->right->right=newnode(66);
	treetraversal(root);
	return 0;
 
}
*/
//from arrry to tree

// CPP program to construct binary  
// tree from given array in level 
// order fashion Tree Node 
/*
#include <bits/stdc++.h> 
using namespace std; 
  
 //A binary tree node has data,  
//pointer to left child and a 
//pointer to right child 
struct Node 
{ 
    int data; 
    Node* left, * right; 
}; 
  
 //Helper function that allocates a 
//new node 
Node* newNode(int data) 
{ 
    Node* node = (Node*)malloc(sizeof(Node)); 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 
  
// Function to insert nodes in level order 
Node* insertLevelOrder(int arr[], Node* root, 
                       int i, int n) 
{ 
    // Base case for recursion 
    if (i < n) 
    { 
        Node* temp = newNode(arr[i]); 
        root = temp; 
  
        // insert left child 
        root->left = insertLevelOrder(arr, 
                   root->left, 2 * i + 1, n); 
  
        // insert right child 
        root->right = insertLevelOrder(arr, 
                  root->right, 2 * i + 2, n); 
    } 
    return root; 
} 
  
// Function to print tree nodes in 
// InOrder fashion 
void inOrder(Node* root) 
{ 
    if (root != NULL) 
    { 
        inOrder(root->left); 
        cout << root->data <<" "; 
        inOrder(root->right); 
    } 
} 
  
// Driver program to test above function 
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 6, 6, 6 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    Node* root = insertLevelOrder(arr, root, 0, n); 
    inOrder(root);
    return 0; 
}*/
//threaded binary tree
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *left,*right;
	bool isthreaded;
};
node *creatthread(node *root)
{
	if(root==NULL)
		return NULL;
	  if(root->left==NULL&&root->right==NULL)
		return root;
	if(root->left!=NULL)
	{
		node *l=creatthread(root->left);
		l->right=root;
		l->isthreaded=true;

	}
	if(root->right==NULL)
		return root;
	return creatthread(root->right);



}
node *leftmost(node *root)
{
	while(root!=NULL&&root->left!=NULL)
		root=root->left;
	return root;
}
void inorder(node *root)
{
	node *cur=leftmost(root);
	while(cur!=NULL)
	{
		cout<<cur->val<<" ";
		if(cur->isthreaded)
			cur=cur->right;
		else
			cur=leftmost(cur->right);
	}
}
node *newnode(int val)
{
	node *temp;
	temp=new node;
	temp->val=val;
	temp->left=temp->right=NULL;
	return temp;
}
int main()
{
	node *root;
	root=newnode(1);
	root->left = newnode(2); 
    root->right = newnode(3); 
    root->left->left = newnode(4); 
    root->left->right = newnode(5); 
    root->right->left = newnode(6); 
    root->right->right = newnode(7);
    creatthread(root);
    inorder(root); 
  
}