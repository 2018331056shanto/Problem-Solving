#include<stdio.h>
Node *creat_node(int item,Node *next);
int main()
{
  typedef struct node Node{
    int data;
    Node *next;
  };
  Node *n;
  n=creat_node(10,NULL);
  printf("data=%d\n",next->data);
  return 0;
}
Node *creat_node(int item,Node *next)
{
  Node *new_node=(Node *) malloc(sizeof(Node));
  if(new_node==NULL)
  {
    printf("error\n" );
    exit(1);
  }
  new_node->data=item;
  new_node->next=next;
  return new_node;
}
