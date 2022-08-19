#include<bits/stdc++.h>
using namespace std;
int tree[800000];
void update(int idx,int l,int r,int pos,int val)
{
	if(pos<=l&&pos>=r)
	{
		if(val==0)
		{
			tree[idx]=0;
			return ;
		
		}
		{
				tree[idx]+=val;
				return ;
		}
	
		
	}
	if(pos>r||pos<l)
	{
		return ;

	}
	int mid=(l+r)/2;
	update(2*idx,l,mid,pos,val);
	update(2*idx+1,mid+1,r,pos,val);
	tree[idx]=tree[2*idx]+tree[2*idx+1];
}
// int ans=0;
// int  query1(int idx,int l,int r,int pos)
// {
// 	if(pos<=l&&pos>=r)
// 	{
//         ans=tree[idx];
//        // cout<<"ans "<<ans<<endl;
//         //cout<<"idx "<<idx<<endl;
//         tree[idx]=0;
//         //cout<<"tree"<<tree[idx]<<endl;
// 		return tree[idx];
// 	}
// 	if(pos>r||pos<l)
// 	{
// 		return 0;
// 	}
// 	int mid=(l+r)/2;
// 	query1(2*idx,l,mid,pos);
// 	query1(2*idx+1,mid+1,r,pos);
// 	return ans; 
// }
int query(int idx,int l,int r,int lb,int ub)
{
	if(lb<=l&&ub>=r)
	{
		return tree[idx];
	}
	if(lb>r||ub<l)
	{
		return 0;
	}
	int mid=(l+r)/2;
	int x=query(2*idx,l,mid,lb,ub);
	int y=query(2*idx+1,mid+1,r,lb,ub);
	return x+y; 
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	int cs=0;
	while(t--)
	{
		memset(tree,0,sizeof(tree));
		cout<<"Case "<<++cs<<":"<<endl;
		int n,q;
		cin>>n>>q;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			update(1,1,n,i,x);
		}
		for(int i=1;i<=q;i++)
		{
			int x;
			cin>>x;
			if(x==1)
			{
				int m;
				cin>>m;
				cout<<query(1,1,n,m+1,m+1)<<endl;
				update(1,1,n,m+1,0);
			}
			else if(x==2)
			{
				int m,v;
				cin>>m>>v;
				update(1,1,n,m+1,v);
			}
			else
			{
				int x,y;
				cin>>x>>y;
				cout<<query(1,1,n,x+1,y+1)<<endl;
			}
		}
	}
}	