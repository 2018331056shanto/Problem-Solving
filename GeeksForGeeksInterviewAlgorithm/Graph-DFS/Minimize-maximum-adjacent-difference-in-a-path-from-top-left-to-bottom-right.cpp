#include<bits/stdc++.h>
using namespace std;


bool isValid(int i,int j,int x,vector<vector<int>>&v,vector<vector<bool>>&vis,int parent,int n,int m)
{

	if(i<0||i>=n||j<0||j>=m||vis[i][j]||abs(v[i][j]-parent)>x)
	{
		return false;
	}

	if(i==n-1&&j==m-1)
		return true;

	vis[i][j]=true;
	if(isValid(i+1,j,x,v,vis,v[i][j],n,m))
		return true;


	if(isValid(i-1,j,x,v,vis,v[i][j],n,m))
		return true;

	if(isValid(i,j+1,x,v,vis,v[i][j],n,m))
		return true;

	if(isValid(i,j-1,x,v,vis,v[i][j],n,m))
		return true;

	return false;
}


void solve(){
	
	int n,m;
	cin>>n>>m;
	std::vector<vector<int>> v(n+1,vector<int>(m+1,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>v[i][j];
		}
	}


	int result=v[0][0];

	int start=0;
	int end=10000000;

	while(start<=end)
	{
			vector<vector<bool>>vis(n+1,vector<bool>(m+1,false));

		int mid=start+(end-start)/2;
		if(isValid(0,0,mid,v,vis,v[0][0],n,m))
		{
			result=mid;
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	cout<<result<<endl;
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
