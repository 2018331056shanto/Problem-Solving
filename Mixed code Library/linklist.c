#include<stdio.h>

typedef struct node Node;
struct node{
 int val;
 Node *next;
 };
 Node *creat_node(int item, Node *next)
 {
      Node *new_node=(Node*)malloc(sizeof(Node));
      if(new_node==NULL)
      {

          printf(" error ");
          exit(1);
      }
      new_node->val=item;
      new_node->next=next;
      return new_node;
 }
int main()
{
    Node *n;
    n=creat_node(13043,NULL);
    printf("%d\n",n->val);
    return 0;

}
