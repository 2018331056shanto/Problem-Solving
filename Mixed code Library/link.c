#include<stdio.h>
struct node{
int val;
struct node *next;
};
struct node *creat_node(int item, struct node *next)
{
    struct node*new_node=(struct node *)malloc(sizeof(struct node));
    if(new_node==0)
    {
        printf("error");
      exit(1);
    }
    new_node->val=item;
    new_node->next=next;
    return new_node;

};
int main()
{

    struct node *n;
    n=creat_node(448848,NULL);
    printf("%d\n",n->val);
    return 0;

}
