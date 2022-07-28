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
node *tree_converter(int a[],node *root,int i,int n)
{

    if(i<n)
    {

node *temp=newnode(a[i]);


    root=temp;

    root->left=tree_converter(a,root->left,2*i+1,n);
    root->right=tree_converter(a,root->right,2*i+2,n);
    }

    return root;
}
void inorder(node *root)
{
    if(root!=NULL)
    {

        inorder(root->left);
        cout<<root->val<<endl;
        inorder(root->right);
    }


}
void preorder(node *root)
{

    if(root!=NULL)
    {

        cout<<root->val<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{

    int a[100];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    node *root;
    root=tree_converter(a,root,0,n);
    inorder(root);
    //preorder(root);
    return 0;

}
