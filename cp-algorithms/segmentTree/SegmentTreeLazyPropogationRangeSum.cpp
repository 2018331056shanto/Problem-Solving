#include<bits/stdc++.h>
using namespace std;

int tree[4*1000],lazy[4*1000];

void buildTree(vector<int>&v,int index,int left,int right)
{
	if(left==right)
	{
		tree[index]=v[left];

	}
	else
	{
		int mid=left+(right-left)/2;
		buildTree(v,2*index,left,mid);
		buildTree(v,2*index+1,mid+1,right);

		tree[index]=tree[2*index]+tree[2*index+1];
	}
}


void update(int index,int left,int right,int sr,int er,int new_value)
{

	if(left>right)
	{
		return;
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

	if(left>right||left>sr||right<er)
	{
		return;
	}



	if(sr<=left&&er>=right)
	{

		tree[index]+=(er-sr+1)*new_value;

		if(left!=right)
		{
			lazy[2*index]+=new_value;
			lazy[2*index+1]+=new_value;
		}
		return ;
	}

	int mid=left+(right-left)/2;

	update(2*index,left,mid,sr,er,new_value);
	update(2*index+1,mid+1,right,sr,er,new_value);

	tree[index]=tree[2*index]+tree[2*index+1];

}



int getSum(int index,int left,int right,int qleft,int qright)
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

	if(left>qright||right<qleft)
	{
		return 0;
	}
	

	if(qleft<=left&&qright>=right)
	{
		return tree[index];
	}


	int mid=left+(right-left)/2;

	// return 1;
	return getSum(2*index,left,mid,qleft,min(qright,mid))+getSum(2*index+1,mid+1,right,min(qleft,mid+1),qright);
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

	int sm=getSum(1,0,n-1,0,2);
	cout<<sm<<endl;

	update(1,0,n-1,0,2,5);


	int sm1=getSum(1,0,n-1,0,2);
	cout<<sm1<<endl;



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
