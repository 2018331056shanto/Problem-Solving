#include<bits/stdc++.h>
using namespace std;
int  tree[800000];
void update(int idx,int l,int r,int lb,int ub,int val)
{
    if(lb<=l&&r<=ub)
    {
        //cout<<idx<<endl;
        tree[idx]=val;
        return ;
        
    }
    if(lb>r||ub<l)
    {
        return ;
    }
    int mid=(l+r)/2;
    update(2*idx,l,mid,lb,ub,val);
    update(2*idx+1,mid+1,r,lb,ub,val);
    
    
}
int val=0;
int query(int idx,int l,int r,int pos)
{

    if(pos<=l&&pos>=r)
    {
       // cout<<"idx : "<<idx<<"val : "<<tree[idx]<<endl;
        val=tree[idx];
        return tree[idx];
    }
    if(pos<l||pos>r)
    {
        return 0;
    }
    if(tree[idx]==1)
    {
        if(tree[2*idx]==1)
        {
            tree[2*idx]=0;
        }
        else
        {
            tree[2*idx]=1;

        }
        if(tree[2*idx+1]==0)
        {
            tree[2*idx+1]=1;
        }
        else
        {
            tree[2*idx+1]=0;
        }
        tree[idx]=-1;
        
    }
    int mid=(l+r)/2;
    //int val;
     query(2*idx,l,mid,pos);
     query(2*idx+1,mid+1,r,pos);
    return val;
}
int cs=0;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         memset(tree,-1,sizeof(tree));
        cout<<"Case "<<++cs<<":"<<endl;
        string s;
        cin>>s;
       
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            
                 update(1,1,n,i+1,i+1,s[i]-'0');
          
        }
        int q;
        cin>>q;
        //  for(int i=0;i<2*n+10;i++)
        // {
        //     cout<<tree[i];
        // }
        // cout<<endl;
        for(int i=0;i<q;i++)
        {
            char c;
            cin>>c;
            if(c=='I')
            {
                int x,y;
                cin>>x>>y;
                update(1,1,n,x,y,1);
               
            }
            else
            {
                int x;
                cin>>x;
                int ans=query(1,1,n,x);
                //cout<<ans<<endl;
            }
        }
        // for(int i=0;i<2*n+10;i++)
        // {
        //     cout<<tree[i];
        // }

    }
}