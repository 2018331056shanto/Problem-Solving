#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *right,*left;
	
};
node *newnode(int x)
{
	node *temp;
	temp=new node; 
	temp->data=x;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}

int main()
{
	node *root;
	root=newnode(4);
	root->left=newnode(362);
	root->right=newnode(245225);
	cout<<root->data<<endl;
	cout<<root->left->data<<endl;
	cout<<root->right->data<<endl; 
	return 0; 

}
