#include<bits/stdc++.h>
using namespace std;
int tree[4*10000];
void update(int n,int l,int r,int lb,int ub )
{
	if(lb>r||ub<l)
	{
		return ;
	}
	if(lb==r&&ub==l)
	{
		tree[n]=!tree[n];
		return ;
	}
	int mid=(l+r)/2;
	
	
		update(2*n,l,mid,lb,ub);
	
	
	
		update(2*n+1,mid+1,r,lb,ub);

	
	
}
int query(int n,int l,int r,int pos)
{
	if(pos==l&&pos==r)
	{
		return tree[n];
	}
	if(tree[n])
	{
		tree[2*n]=!tree[2*n];
		tree[2*n+1]=!tree[2*n+1];
		tree[n]=0;
	}
	int mid=(l+r)/2;
    if(pos<=mid)
    {
    	return query(2*n,l,mid,pos);
    }
    else
    {
    	return query(2*n+1,mid+1,r,pos);
    }
}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"Case "<<t<<":"<<endl;
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
		int q;
		cin>>q;
		char c;
		cin>>c;
		if(c=='I')
		{
			int lb,ub;
			cin>>lb>>ub;
			update(1,1,n,lb,ub);

		}
		else
		{
			int x;
			cin>>x;
			int ss=query(1,1,n,x);
			cout<<ss<<endl;

		}
	}
	
}	