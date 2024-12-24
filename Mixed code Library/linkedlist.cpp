#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
    
};
void insert(node **head,int pos,int val)
{
    
    node *current=*head;
    int cnt=0;
    //when we inset element at the fornt of the linkedList
    if(pos==1)
    {
       node *newNode=new node(val);
       newNode->next=*head;
       *head=newNode;
       
    }
    else
    {
        //when we insert data at the middle of the linkedlist
         while(current->next!=NULL)
    {
         cnt++;
        
        if(pos-1==cnt)
           {
            
            node *temp=new node(val);
            node *temp1=current->next;
            current->next=temp;
            current=current->next;
            current->next=temp1;
           return ;
           }

        current=current->next;

    }
    //When we enter at the last 
    node *newNode=new node(val);
    current->next=newNode;
    
    }
}
void deleteNode(node **head,int pos)
{
    //delete the first node in linkedlist
    if(pos==1)
    {
        node *head1=*head;
        *head=head1->next;
        free(head1);
        
    }
    else 
    {
        int cnt=0;
        node *current=*head;
        while(current->next!=NULL)
        {
            cnt++;
            if(pos-1==cnt)
            {
                node *temp=current;
                node *temp1=current->next->next;
                free(temp->next);
                temp->next=temp1;
            }
            current=current->next;
        }
    }
}
void Print(node **head)
{   
    node *print=*head;
     while(print->next!=NULL)
    {
        cout<<print->data<<endl;
        print=print->next;
    }
    cout<<print->data<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    node *head=NULL,*temp=NULL;
    // cout<<head<<endl;
    node *print;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        node *new_node;
        
        new_node=new node(x);
        // cout<<next<<endl;
        if(head==NULL&&temp==NULL)
        {
            head=temp=new_node;
            continue;
        }
        // cout<<new_node<<endl;
        temp->next=new_node;
        temp=temp->next;

        // cout<<new_node<<endl;
        
    }
      // cout<<head->data<<endl;
     

    
    // cout<<head<<endl;
    // insert(head,0,100);
    // insert(head,1,2828);
    insert(&head,1,777);
    insert(&head,3,12331);  
    insert(&head,1,333);
    // // cout<<"its head "<<head<<endl;

    insert(&head,1,111);
   
    insert(&head,10,555);
      // Print(&head);
     // deleteNode(&head,1);
     deleteNode(&head,9);
     Print(&head);
   
}