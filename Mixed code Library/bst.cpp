#include<bits/stdc++.h>
using namespace std;
struct bst
{
	int val;
	bst *left,*right;
	bst(int data)
	{
		val=data;
		left=right=NULL;
	}
	
};
bst *insert(bst *head,int data)
{
	if(head==NULL)
	{
		bst *temp=new bst(data);
		// cout<<temp<<endl;
		
		// *head=temp;
		return temp;
	}
	if(!head)
	{
		// cout<<"fuck8s888888"<<endl;
		bst *temp1=new bst(data);

		return temp1;
	}
	if(data>head->val)
	{
		head->right=insert(head->right,data);
		// cout<<"hello"<<endl;
	}
	else
	{
		head->left=insert(head->left,data);
		// cout<<"hi"<<endl;
	}
	return head;

}
bst *inorderPre(bst *head)
{
	// cout<<"inorder "<<endl;
	head=head->left;
	while(head->right!=NULL)
	{

		head=head->right;
	}
	// cout<<"count "<<endl;
	return head;
}
bst *deleteNode(bst *head,int key)
{
	// cout<<head<<endl;
	// cout<<head->right<<endl;
	bst *predecessor;
	if(head==NULL)
	{
		return NULL;
	}
	if(head->left==NULL&&head->right==NULL)
	{
		free(head);
		return NULL;
	}
	
	if(key>head->val)
	{
		head->right=deleteNode(head->right,key);
	}
	else if(key<head->val)
	{
		head->left=deleteNode(head->left,key);
	}
	else
	{
		// cout<<"hello"<<endl;
		if(head->left==NULL)
		{
			bst *temp=head->right;
			// cout<<"i am in"<<endl;
			delete head;
			// cout<<"hello"<<endl;
			head=temp;
		}
		else if(head->right==NULL)
		{
			bst *temp=head->left;
			delete head;
			head=temp;
		}
		else
		{
			predecessor=inorderPre(head);
		// cout<<"dear bro"<<endl;
			head->val=predecessor->val;
			head->left=deleteNode(head->left,predecessor->val);
		}

	

	}
	// cout<<head<<endl;
	return head;

}
void search(bst *head)
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
	bst *head=NULL;

	head=insert(head,1);
	// cout<<head<<endl;
	insert(head,77);
	insert(head,6);
	insert(head,5);
	insert(head,11);
	search(head);
	 cout<<"hone "<<endl;
	deleteNode(head,6);
	 // cout<<head<<endl;
	search(head);
	
}
// array
// #include<bits/stdc++.h>
// using namespace std;
// int ar[100];
// void insert(int pos,int data)
// {
// 	if(ar[0]==0)
// 	{
// 		ar[0]=data;
// 		cout<<"position "<<pos<<" "<<data<<endl;
// 		return ;
// 	}
	
// 	if(ar[pos]==0)
// 	{
// 		ar[pos]=data;
		
// 		cout<<"position "<<pos<<" "<<data<<endl;
// 		return ;
// 		// cout<<"hell"<<endl;
		
// 	}
// 	if(data>ar[pos])
// 	{
// 		insert(2*pos+2,data);
// 	}
// 	else
// 	{
// 		insert(2*pos+1,data);
// 	}
// 	return ;
// }

// void search(int pos)
// {
// 	if(ar[pos]==0)
// 		return;
// 	search(2*pos+1);
// 	cout<<ar[pos]<<endl;
// 	search(2*pos+2);
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	insert(0,10);
// 	insert(0,4);
// 	insert(0,7);
// 	insert(0,3);
// 	insert(0,12);
// 	insert(0,11);
// 	search(0);
// 	deleteNode(5);

	
// }
