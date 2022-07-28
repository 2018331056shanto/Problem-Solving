#include<bits/stdc++.h>
using namespace std;
int  tree[1000];
void update(int ind,int lb,int ub,int val,int pos )
{
    if(pos<lb||pos>ub)
    return ;
    if(lb==ub)
    {
        if(lb==pos)
        tree[ind]=val;
        return ;
    }
    int mid=(lb+ub)/2;
    if(pos<=mid)
    update((ind*2),lb,mid,val,pos);
    else
    {
        update((ind*2)+1,mid+1,ub,val,pos);
    }
    tree[ind]=tree[ind*2]+tree[(ind*2)+1];
    
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        update(1,0,n-1,x,i);
    }
    for(int i=0;i<=n;i++)
    {
        cout<<tree[i]<<" ";
    }
}