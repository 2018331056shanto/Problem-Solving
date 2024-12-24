#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *next;

};
struct singlylinklist
{
    node *head,*tail;
    singlylinklist()
    {
        head=tail=NULL
    }
    ~singlylinklist();
    void enque(int x);
    int deqeue();
    int printlist();

};
void singlylinklist::enque(int x)
{

    node *cur;
    cur=new node;
    cur->val=x;
    cout<<"x is enqued"<<x<<endl;
    if(head==NULL&&tail==NULL)
    {

        head=tail=cur;
        return ;
    }
    else
    {
        tail->next=cur;
        tail=cur->next;
    }

}
int singlylinklist::deqeue()
{
    node *cur;
    cur=head;
    int x=cur->val;
    cout<<"x is dequed"<<x<<endl;
    if(head==NULL&&tail==NULL)
    {

        cout<<"underflow"<<endl;
        return -1;
    }
    if(head==tail)
    {

       head=tail=NULL;



    }
    else
        head=head->next;
    delete cur;
    return x;

}
int singlylinklist::printlist()
{


}
int main()
{

    singlylinklist s1;

}
