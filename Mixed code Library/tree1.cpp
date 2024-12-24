#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
};
 node *newnode(int val)
 {


 }
int main()
{

    node *root,*root1,*root2,*root3,*root4,*root5,*root6;
    root=new node;
    root1=new node;
    root2=new node;
    root3=new node;
    root4=new node;
    root5=new node;
    root6=new node;
    root->val=32;
    root->left=root1;
    root->right=root2;
    root1->val=2323;
    root2->val=3223;
    root->left->left=root3;
    root->right->right=root4;
    root3->val=2222345;
    root4->val=5056;
    root->left->right=root5;
    root5->val=50589;
    root->left->right->left=NULL;
    root->left->right->right=NULL;
    root->right->left=root6;
    root6->val=1185058;
    root->right->left->left=NULL;
    root->right->left->right=NULL;

    root->left->left->left=NULL;
    root->right->right->right=NULL;
    cout<<root->val<<endl;
    cout<<root->left->val<<endl;
    cout<<root->right->val<<endl;
    cout<<root->left->left->val<<endl;
    cout<<root->left->right->val<<endl;
    cout<<root->right->right->val<<endl;
    cout<<root->right->left->val<<endl;
    return 0;



}
