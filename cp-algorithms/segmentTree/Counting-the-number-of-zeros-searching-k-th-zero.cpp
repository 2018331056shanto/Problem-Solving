#include<bits/stdc++.h>
using namespace std;

int tree[4*10000];
void buildTree(vector<int>&v,int index,int low,int high)
{
	if(low==high)
	{
		if(v[low]==0)
		{
			tree[index]=1;
		}
	}
	else
	{
		int mid=low+(high-low)/2;

		buildTree(v,2*index,low,mid);
		buildTree(v,2*index+1,mid+1,high);

		tree[index]=tree[2*index]+tree[2*index+1];
	}
}

int getZero(int index,int low,int high,int qlow,int qhigh)
{
	if(low>high)
	{
		return 0;
	}
	if(qlow>high||qhigh<low)
	{
		return 0;
	}
	if(qlow<=low&&qhigh>=high)
	{
		return tree[index];
	}

	int mid=low+(high-low)/2;

	return getZero(2*index,low,mid,qlow,min(mid,qhigh))+getZero(2*index+1,mid+1,high,max(mid+1,qlow),qhigh);
}

int kThZero(int index,int low,int high,int k)
{
	if(k>tree[index])
	{
		return -1;
	}


	if(low==high)
	{
		return low;
	}
	int mid=low+(high-low)/2;



	if(k<=tree[2*index])
	{
		return kThZero(2*index,low,mid,k);
	}
	else
	{
		return kThZero(2*index+1,mid+1,high,k-tree[2*index]);
	}
	// return index
}

void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	buildTree(v,1,0,n-1);

	int ans=getZero(1,0,n-1,2,3);
	cout<<ans<<endl;

	int k;
	cin>>k;

	int idx=kThZero(1,0,n-1,k);

	cout<<idx<<endl;
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
