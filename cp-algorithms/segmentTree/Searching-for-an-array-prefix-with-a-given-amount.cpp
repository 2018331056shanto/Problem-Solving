#include<bits/stdc++.h>
using namespace std;

int tree[4*1000];

void build(vector<int>&v,int index,int low,int high)
{
	if(low==high)
	{
		tree[index]=v[low];
	}
	else
	{
		int mid=low+(high-low)/2;

		build(v,2*index,low,mid);
		build(v,2*index+1,mid+1,high);
		tree[index]=tree[2*index]+tree[2*index+1];
	}
}

int getIndex(int index,int low,int high,int x)
{
	if(x>tree[index])
	{
		return -1;
	}

	if(low==high)
	{
		return low;
	}

	int mid=low+(high-low)/2;

	if(tree[2*index]<x)
	{
		return getIndex(2*index+1,mid+1,high,x-tree[2*index]);
	}
	else
	{
		return getIndex(2*index,low,mid,x);
	}
}

void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}	

	build(v,1,0,n-1);
	int x;
	cin>>x;

	int index=getIndex(1,0,n-1,x);
	cout<<index<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
