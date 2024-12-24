#include<bits/stdc++.h>
using namespace std;

int t[4*100000];

void buildTree(vector<int>&v,int index,int left,int right)
{
	if(left==right)
	{
		t[index]=v[left];
	}

	else{

		int mid=left+(right-left)/2;

		buildTree(v,2*index,left,mid);
		buildTree(v,2*index+1,mid+1,right);

		t[index]=max(t[2*index],t[2*index+1]);
	}
}

void update(int index,int left,int right,int pos,int new_value)
{
	if(left==right)
	{
		t[index]=new_value;
	}

	else
	{
		int mid=left+(right-left)/2;

		if(pos<=mid)
		{
			update(2*index,left,mid,pos,new_value);
		}
		else
		{
			update(2*index+1,mid+1,right,pos,new_value);
		}

		t[index]=max(t[2*index],t[2*index+1]);
	}
}

int query(int index,int left,int right,int qleft,int qright)
{
	if(qleft>qright)
	{
		return INT_MIN;
	}

	if(left==qleft&&right==qright)
	{
		return t[index];
	}

	int mid=left+(right-left)/2;
	return max(query(2*index,left,mid,qleft,min(mid,qright)),query(2*index+1,mid+1,right,max(qleft,mid+1),qright));
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

	int ans=query(1,0,n-1,1,4);
	cout<<ans<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
