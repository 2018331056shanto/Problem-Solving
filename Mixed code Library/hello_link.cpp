#include<iostream>
using namespace std;
struct Node{
int val;
Node *next;
};
void printlist(Node *n)
{

  while(n!=NULL)
   cout<< n->val<<endl;
  n=n->next;
}
int main()
{


Node *head=NULL;
Node *second=NULL;
Node *third=NULL;
 head=new Node;
 second=new Node;
 third=new Node;
 head->val=3;
 head->next=second;
 second->val=343;
 second->next=third;
 third->val=353;
 third->next=NULL;
 printlist(head);

return 0;

}


