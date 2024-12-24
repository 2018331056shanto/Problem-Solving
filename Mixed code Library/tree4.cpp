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

    node *temp;
    temp=new node;
    temp->val=val;
    temp->left=NULL;
    temp->right=NULL;
    return (temp);

}
int main()
{

    node *root;
    root=newnode(53);
    root->left=newnode(23);
    root->right=newnode(2324);
    cout<<root->left->val<<endl;
    cout<<root->right->val<<endl;
    cout<<root->val<<endl;
}
