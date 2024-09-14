#include<bits/stdc++.h>
using namespace std;

pair<int,int>t[4*1000];

pair<int,int>combine(pair<int,int>a,pair<int,int>b)
{
	if(a.first>b.first)
	{
		return a;
	}
	if(b.first>a.first)
	{
		return b;
	}

	return make_pair(a.first,a.second+b.second);
}

void build(vector<int>&v,int index,int left,int right)
{

	if(left==right)
	{
		t[index]={v[left],1};
	}


	else
	{
		int mid=left+(right-left)/2;
		build(v,2*index,left,mid);
		build(v,2*index+1,mid+1,right);

		t[index]=combine(t[2*index],t[2*index+1]);
	}
}

void update(int index,int left,int right,int pos,int new_value)
{
	if(left==right)
	{
		t[index]={new_value,1};
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

		t[index]=combine(t[2*index],t[2*index+1]);
	}
}

pair<int,int>getMax(int index,int left,int right,int qleft,int qright)
{
	if(qleft>qright)
	{
		return {0,0};
	}

	if(qleft==left&&qright==right)
	{
		return t[index];
	}

	int mid=left+(right-left)/2;

	return combine(getMax(2*index,left,mid,qleft,min(qright,mid)),getMax(2*index+1,mid+1,right,max(qleft,mid+1),qright)); 
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

	pair<int,int>ans=getMax(1,0,n-1,0,1);
	cout<<ans.first<<" "<<ans.second<<endl;

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
