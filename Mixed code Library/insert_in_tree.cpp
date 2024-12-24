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
node  *insert(node *root,int data)
{
	if(root==NULL)
	 
	return newnode(data);
if(root->val<data)
	root->right=insert(root->right,data);
root->left=insert(root->left,data);
return root;

 
}
int main()
{
	node *root;
	insert(root,23);
	insert(root,232);
	cout<<root->val<<endl;
	return 0;

}