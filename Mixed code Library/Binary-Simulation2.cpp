#include<bits/stdc++.h>
using namespace std;
bool tree[800000];
void update(int idx,int l,int r,int lb,int ub)
{
	if(lb==l&&ub==r)
	{
		tree[idx]=!tree[idx];
		cout<<idx<<endl;
		return ;
	}
	int mid=(l+r)/2;
	if(ub<=mid)
	{
		update(2*idx,l,mid,lb,ub);

	}
	else if(mid<lb)
	{
		update(2*idx+1,mid+1,r,lb,ub);

	}
	else
	{
		update(2*idx,l,mid,lb,mid);
		update(2*idx,mid+1,r,mid+1,ub);
	}
}
int val=0;
int query(int idx,int l,int r,int pos)
{

	if(l==pos&&r==pos)
	{
	    return !tree[idx];
	}
	if(tree[idx])
	{
		tree[2*idx]=!tree[2*idx];
		tree[2*idx+1]=!tree[2*idx+1];
		tree[idx]=0;
	}
	int mid=(l+r)/2;
	if(pos<=mid)
	{
		return query(2*idx,l,mid,pos);
	}
	else
	{
		return query(2*idx+1,mid+1,r,pos);
	}
	


}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int t;
	cin>>t;
	int cs=0;
	while(t--)
	{
		 memset(tree, 0, sizeof(tree));
		cout<<"Case "<<++cs<<":"<<endl;
		string s;
		cin>>s;
		int n=s.size();
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
				update(1,1,n,i+1,i+1);
			}
		}
		// for(int i=0;i<2*n+10;i++)
		// {
		// 	cout<<tree[i];
		// }
		// cout<<endl;
		int q;
		cin>>q;
		for(int i=0;i<q;i++)
		{
			char c;
			cin>>c;
			if(c=='I')
			{
				int x,y;
				cin>>x>>y;
				update(1,1,n,x,y);
			}
			else
			{
				int x;
				cin>>x;
				cout<<query(1,1,n,x)<<endl;
			}
		}
		// for (int i = 0; i < 2*n+10; ++i)
		// {
		// 	cout<<tree[i];
		// }
		// cout<<endl;

	}
}	