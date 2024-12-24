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
    root=newnode(323);
    root->left=newnode(23);
    root->right=newnode(22);
    root->left->left=newnode(2);
    root->right->right=newnode(98);
    traversal(root);
    return 0;

}

