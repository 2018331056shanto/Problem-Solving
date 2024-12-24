// usjng functions
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
   return(temp);

}
int main()
{

    node *root;
    root=newnode(323);
    root->left=newnode(34532);
    root->right=newnode(232131);
    root->left->left=newnode(29983);
    root->left->right=newnode(23423552);
    root->right->left=newnode(5058);
    root->right->right=newnode(2421);
    cout<<root->val<<endl;
    cout<<root->left->val<<endl;
    cout<<root->right->val<<endl;
    cout<<root->left->left->val<<endl;
    cout<<root->left->right->val<<endl;
    cout<<root->right->right->val<<endl;
    cout<<root->right->left->val<<endl;
    return 0;
}
