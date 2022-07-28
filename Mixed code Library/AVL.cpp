#include<bits/stdc++.h>
using namespace std;
struct AVL
{
	int val,height;
	AVL *left,*right;
	AVL(int data)
	{
		val=data;
		height=1;
		left=right=NULL;
	}

};
int height(AVL *cur)
{
	if(cur==NULL)
	{
		return 0;
	}
	else
	{
		return cur->height;
	}

}
int getbalance(AVL *cur)
{
	if(cur==NULL)
	{
		return 0;
	}
	else
	{
		return height(cur->left)-height(cur->right);
	}
}
AVL *rightRotate(AVL *cur)
{
	AVL *temp=cur->left;
	AVL *temp1=temp->right;
	cur->left=temp1;
	temp->right=cur;
	cur->height=max(height(cur->left),height(cur->right))+1;
	temp->height=max(height(temp->left),height(temp->right))+1;
	return temp;
}
AVL *leftRotate(AVL *cur)
{
	AVL *temp=cur->right;
	AVL *temp1=temp->left;
	temp->left=cur;
	cur->right=temp1;
	cur->height=max(height(cur->left),height(cur->right))+1;
	temp->height=max(height(temp->left),height(temp->right))+1;
	return temp;
}
AVL *insert(AVL *head,int data)
{
	
	if(head==NULL)
	{
	
		AVL *temp=new AVL(data);
		// cout<<"data "<<data<<endl;
		return temp;

	}
	if(data>head->val)
	{
		head->right=insert(head->right,data);
	}
	else if(data<head->val)
	{
		// cout<<"i am don "<<endl;
		 // cout<<head->left<<endl;
		head->left=insert(head->left,data);
		// cout<<"hello  bro"<<endl;
		// cout<<"i am fucked up"<<endl;
	}
	else
	{
		return head;
	}
	head->height=1+max(height(head->left),height(head->right));
	int balance=getbalance(head);
	if(balance>1&&data<head->left->val)
	{
		//left-left case
		cout<<"here am in left-left  "<<endl;
		return rightRotate(head);
	}
	if(balance<-1&&data>head->right->val)
	{
		//right-right



		cout<<"here am in right-right  "<<endl;
		return leftRotate(head);
	}
	if(balance>1&&data>head->left->val)
	{
		//left-right
		cout<<"here am in left-right  "<<endl;
		head->left=leftRotate(head->left);
		return rightRotate(head);
	}
	if(balance<-1&&data<head->right->val)
	{
		cout<<"here am in right-left  "<<endl;
		//right-left
		head->right=rightRotate(head->right);
		return leftRotate(head);
	}
	return head;


}
void search(AVL *head)
{
	if(!head)
	{
		return;
	}
	search(head->left);
	cout<<head->val<<endl;
	search(head->right);
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	AVL *head=NULL;
	AVL *root=NULL;
	head=insert(head,15);
	head=insert(head,20);
	// cout<<"1 "<<head<<endl;
	head=insert(head,10);
	// cout<<"2 "<<head<<endl;
	head=insert(head,12);	
	// cout<<"3 "<<head<<endl;
	head=insert(head,11);
	// cout<<"4 "<<head<<endl;
	head=insert(head,9);
	head=insert(head,13);
    head=insert(head,8);
	head=insert(head,7);
	// cout<<"5 "<<head<<endl;
	// cout<<"head 21"<<head<<endl;
	// head=insert(head,5);
	// head=insert(head,8);
	search(head);
	// cout<<"rhw wna"<<endl;
}