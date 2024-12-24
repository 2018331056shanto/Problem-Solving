#include<bits/stdc++.h>
using namespace std;
struct node 
    {
        int data;
        Node*left;
        node*right;
    };
    node*cr_tree(int item)
    {
        node* p;
        p=new node();
        if(p==NULL)
        {
            exit(1);
        }
        p->data=item;
        p->left=null;
        p->right=null;
        return p;
    }

int main()
{
    int c;
    cin>>c;

    node*root=cr_tree(c);
    

    
}