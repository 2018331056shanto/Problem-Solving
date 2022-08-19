#include<bits/stdc++.h>
using namespace std;
int tree[8*100000];
void update(int idx,int l,int r,int pos,int val)
{
	if(pos<=l&&pos>=r)
	{
		tree[idx]=val;
		return ;
	}
	if(pos<l||pos>r)
	{
		return ;
	}
	int mid=(l+r)/2;
	update(2*idx,l,mid,pos,val);
	update(2*idx+1,mid+1,r,pos,val);
	tree[idx]=min(tree[2*idx],tree[2*idx+1]);
}
int query(int idx,int l,int r,int lb,int ub)
{
	if(lb<=l&&ub>=r)
	{
		return tree[idx];
	}
	if(lb>r||ub<l)
	{
		return 1e9;
	}
	int mid=(l+r)/2;
	int x=query(2*idx,l,mid,lb,ub);
	int y=query(2*idx+1,mid+1,r,lb,ub);
	return min(x,y);
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	int cs=0;
	while(t--)
	{
		cout<<"Case "<<++cs<<":"<<endl;
		int n,q;
		cin>>n>>q;
		memset(tree,0,sizeof(tree));
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			update(1,1,n,i,x);
		}
		for(int i=1;i<=q;i++)
		{
			int x,y;
			cin>>x>>y;
			cout<<query(1,1,n,x,y)<<endl;
		}
	}
}	