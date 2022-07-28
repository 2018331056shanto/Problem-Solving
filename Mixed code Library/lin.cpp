#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *next;

};
int main()
{

    node *start;


    node *link,*shanto,*peuly,*abbu;
    start->next=link;
    link=new node;
    shanto=new node;
    peuly=new node;
    abbu=new node;
    link->val=5344;
    link->next=abbu;
    abbu->val=2332;
    abbu->next=shanto;
    shanto->val=788;
    shanto->next=peuly;
    peuly->val=232121;
    peuly->next=NULL;
    while(link->next!=NULL)
    {

        link=link->next;
        cout<<link->val<<endl;
    }
    return 0;
}
