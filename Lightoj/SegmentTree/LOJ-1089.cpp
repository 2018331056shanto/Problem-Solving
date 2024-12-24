#include<bits/stdc++.h>
using namespace std;



const int largestValue=10000;
void update(vector<int>&tree,vector<int>&lazy,int index,int left,int right,int qleft,int qright)
{
	if(left>right)
	{
		return;
	}

	if(lazy[index]!=0)
	{
		tree[index]+=1;

		if(left!=right)
		{
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];
		}
		lazy[index]=0;
	}

	if(left>qleft||right<qright)
	{
		return;
	}
	if(qleft<=left&&qright>=right)
	{
		tree[index]+=1;
		if(left!=right)
		{
			lazy[2*index]+=1;
			lazy[2*index+1]+=1;
		}
		return;
	}
	int mid=left+(right-left)/2;

	update(tree,lazy,2*index,left,mid,qleft,qright);
	update(tree,lazy,2*index+1,mid+1,right,qleft,qright);
	
	tree[index]=tree[2*index]+tree[2*index+1];
	cout<<left<<" "<<right<<" "<<tree[index]<<endl;
}

int query(vector<int>&tree,vector<int>&lazy,int index,int left,int right,int pos)
{

	if(left>right)
	{
		return 0;
	}
	if(lazy[index]!=0)
	{
		tree[index]+=lazy[index];
		if(left!=right)
		{
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];

		}
		lazy[index]=0;
	}
	if(pos<left||pos>right)
	{
		return 0;
	}
	if(left==right)
		// cout<<left<<" "<<pos<<" "<<right<<endl;
	{
		return tree[index];
	}

	int mid=left+(right-left)/2;

	if(pos<=mid)
	{
		return query(tree,lazy,2*index,left,mid,pos);
	}
	else
	{
		return query(tree,lazy,2*index+1,mid+1,right,pos);
	}
}

void solve(){
	
	int n,q;
	cin>>n>>q;
	vector<pair<int,int>>v;
	int mx=INT_MIN;
	int mn=INT_MAX;

	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		mx=max(mx,y);
		mn=min(mn,x);
		v.push_back({x,y});

	}
vector<int>tree(4*mx,0);
vector<int>lazy(4*mx,0);

for(auto x:v)
{
	update(tree,lazy,1,0,mx,x.first,x.second);
}
	while(q--)
	{
		int x;
		cin>>x;

		int ans=query(tree,lazy,1,0,mx,x);
		cout<<ans<<endl;
	}
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		for(int i=1;i<=t;i++)
		{
			solve();
		}
	}
