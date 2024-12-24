#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *left,*right;
	/*node(int data)
	{
		this->data;
		left=right=NULL;

	}
	*/

};
 node *newnode(int data)
 {
 	node *temp; 
 	temp=new node;
 	temp->data=data;

 	temp->left=temp->right=NULL;
 	return temp;
 }

  void print_preorder(node *root)
 {
 	if(root!=NULL)
 	{
 		cout<<root->data<<endl;
 		print_preorder(root->left);
 		print_preorder(root->right);
 	}
 	

 
 }
 void print_inorder(node *root)
 {
 	if(root!=NULL)
 	{
 		print_inorder(root->left);
 		cout<<root->data<<endl;  
 		print_inorder(root->right);
 	}
 	
 }
 void print_postorder(node *root)
 {
 	if(root!=NULL)
 	{
 		print_postorder(root->left);
 		print_postorder(root->right);
 		cout<<root->data<<endl;

 	}
 	
 }
int main()
{
	node *root;
	root=newnode(53);
	root->left=newnode(3543);
	root->right=newnode(2456543);
	root->left->left=newnode(242);
	root->left->right=newnode(124);
	root->right->left=newnode(4674);
	root->right->right=newnode(12463);
	print_postorder(root);
	print_inorder(root);
	print_preorder(root);
	return 0;


}