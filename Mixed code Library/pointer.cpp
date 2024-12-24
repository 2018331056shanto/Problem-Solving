#include<bits/stdc++.h>
using namespace std;
struct node
{

    int val;
    node *next;

};
int push(node **top,int x)
{
    node *newnode=new node;
    newnode->val=x;
    newnode->next=*top;
    cout<<"one item has pushed"<<" "<<x<<endl;
    *top=newnode;
    return x;
}
int peek(node **top)
{

    node *temp=*top;
    int x=temp->val;
    cout<<"top is"<<" "<<x<<endl;
    return x;
}
int pop(node **top)
{

    node *temp=*top;
    if(*top==NULL)
    {

        cout<<"underflow"<<endl;
    }
    else
    {



    *top=temp->next;
    int x=temp->val;
    cout<<"it is popped"<<" "<<x<<endl;
    free(temp);
    return x;
    }

}
int main()
{

    struct node *top=NULL;
    push(&top,4);
    push(&top,333);
    peek(&top);

    pop(&top);
        peek(&top);
    return 0;
}
