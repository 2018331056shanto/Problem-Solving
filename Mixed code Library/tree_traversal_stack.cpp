#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *left,*right;
};
node *newnode(int data)
{
	node *temp;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void stackshow(node *root)
{
	stack<node*>stackbar;

}
int main()
{
	node *root;
	root=newnode(1);
	root->left=newnode(3);
	root->right=newnode(4);
	root->left->left=newnode(5);
	root->left->right=newnode(6);
	root->right->right=newnode(43);
	root->right->left=newnode(30);

}