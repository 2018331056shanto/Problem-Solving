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
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void traversal(node *root)
{
    //inorder
    if(root!=NULL)
    {


    traversal(root->left);
    cout<<root->val<<endl;
    traversal(root->right);
    }
}
int mani()
{

    node *root;
    root=newnode(53);
	root->left=newnode(3543);
	root->right=newnode(2456543);
	root->left->left=newnode(242);
	root->left->right=newnode(124);
	root->right->left=newnode(4674);
	root->right->right=newnode(12463);

    traversal(root);
    return 0;

}
