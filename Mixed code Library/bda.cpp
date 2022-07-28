#include<bits/stdc++.h>
using namespace std;
#define Max 200000
int tree[3*Max];
int arr[Max];
void update(int n,int l,int r,int i,int val)
{
	if(i<=l&&i>=r)
	{
		tree[n]=val;//root
		return ;
	}
	if(i>l||i<r)
	{
		return ;
	}
	int mid=(l+r)/2;
	update(2*n,l,mid,i,val);
	update(2*n+1,mid+1,r,i,val);
	tree[n]=tree[2*n]+tree[2*n+1];

}
int query(int n,int l,int r,int i,int j)
{
	if(i>r||j<l)
	{
		return 0;
	}
	if(i<=l&&j>=r)
	{
		return tree[n];
	}
	int mid=(l+r)/2;
	return query(2*n,l,mid,i,j)+query(2*n+1,mid+1,r,i,j);

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int r=n+q+10;
		for(int i=0;i<=r;i++)
		{
			if(i<n)
			{
				update(1,0,r,i,1);
			}
			else
			{
				update(1,0,r,i,0),arr[i]=0;
			}
		}
		char c;
		int x;
		cin>>c>>x;
		if(c=='c')
		{
			int i=-1;
			for(int j=20;j>=0;j--)
			{
				int k=i+(1<<j);
				if(k<r&&query(n,0,r,0,k)<x)
				{
					i=k;
				}
				update(1,0,r,i+1,0);
				if(arr[i+1])
				{
					cout<<arr[i+1]<<endl;
				}
				else
				{
					cout<<"none"<<endl;
				}

			}
		}
		else
		{
			update(1,0,r,n,1);
			arr[n]=x;
			n++;
		}

	}
	
}	