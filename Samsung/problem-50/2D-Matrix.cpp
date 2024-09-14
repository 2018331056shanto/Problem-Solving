// /*

// we have to go from [0][0] to [n][n]. in that process we will have either some value or x. 1 means we can move
// in that gird x means we can't go in that place. So the problem defines that
// we have to move from [0][0] to [n][n] with the maximum possible value and 
// we have to also identify number of path having that maximum value*/

// // #include<iostream>
// // #include<vector>
// // #include<utility>
// #include<bits/stdc++.h>

// using namespace std;

// const int mx=1e3;
// int n;

// char arr[mx][mx];

// pair<int,int>fn(int i,int j,vector<vector<pair<int,int>>>&dp)
// {
// 	if(i==n-1&&j==n-1)
// 	{
// 		return {0,1}; //{max value we can get while reaching the last one, the number of ways to get to the last node}

// 	}

// 	if(i<0||j<0 ||i==n||j==n)
// 		return {INT_MIN,INT_MIN};
// 	if(arr[i][j]=='x')
// 		return {INT_MIN,INT_MIN};
// 	if(dp[i][j].first!=-1)
// 		return {dp[i][j].first,dp[i][j].second};

// 	pair<int,int>x=fn(i+1,j,dp);
// 	pair<int,int>y=fn(i,j+1,dp);
// 	pair<int,int>z=fn(i+1,j+1,dp);

// 	int m=max(x.first,max(y.first,z.first));
// 	int cnt=0;

// 	if(m==x.first)
// 		cnt+=x.second;
// 	if(m==y.first)
// 		cnt+=y.second;
// 	if(m==z.first)
// 		cnt+=z.second;

// 	dp[i][j].first=m+(arr[i][j]-'0');
// 	dp[i][j].second=cnt;
// 	return dp[i][j];
// }

// void solve()
// {
// 	cin>>n;

// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			cin>>arr[i][j];
// 		}
// 	}	

// 	arr[0][0]=arr[n-1][n-1]='0';

// 	std::vector<vector<pair<int,int>>> dp(n+4,vector<pair<int,int>>(n+4,{-1,-1}));

// 	pair<int,int> p=fn(0,0,dp);
// 	cout<<p.first<<" "<<p.second<<endl;
// }


// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 		solve();
// }

// /*
// 1
// 5
// 1 2 3 4 5
// 2 x 2 x 1
// 2 3 4 x x
// x x 3 x x
// x x 5 1 2


// 1
// 5
// 1 2 3 4 5
// 2 x 2 x 1
// 2 0 4 x x
// x x 3 5 1
// x x 5 1 2  

// 20 3

// */


#include<bits/stdc++.h>

using namespace std;

int n;
const int mx=1e3;

char arr[mx][mx];


// pair<int,int>func(int i,int j,vector<vector<pair<int,int>>>&dp)
// {
// 	if(i==n-1&&j==n-1)
// 	{
// 		return {0,1};
// 	}
// 	if(i<0||j<0||i==n||j==n)
// 	{
// 		return {INT_MIN,INT_MIN};
// 	}
// 	if(arr[i][j]=='x')
// 	{
// 		return {INT_MIN,INT_MIN};
// 	}
// 	if(dp[i][j].first!=-1)
// 	{
// 		return {dp[i][j].first,dp[i][j].second};
// 	}


// 	pair<int,int>x=func(i+1,j,dp);
// 	pair<int,int>y=func(i,j+1,dp);
// 	pair<int,int>z=func(i+1,j+1,dp);

// 	int m=INT_MIN;
// 	int cnt=0;
// 	m=max(x.first,max(y.first,z.first));

// 	if(m==x.first)
// 	{
// 		cnt+=x.second;
// 	}
// 	if(m==y.first)
// 	{
// 		cnt+=y.second;
// 	}
// 	if(m==z.first)
// 	{
// 		cnt+=z.second;
// 	}

// 	dp[i][j].first=m+(arr[i][j]-'0');
// 	dp[i][j].second=cnt;


// 	return dp[i][j];
// }

pair<int,int>func(int i,int j,vector<vector<pair<int,int>>>&dp)
{
	if(i==n-1&&j==n-1)
	{
		return {0,1};
	}

	if(i<0||i==n||j<0||j==n||arr[i][j]=='x')
	{
		return {INT_MIN,INT_MIN};
	}


	if(dp[i][j].first!=-1)
	{
		return {dp[i][j].first,dp[i][j].second};
	}

	pair<int,int>x=func(i+1,j,dp);
	pair<int,int>y=func(i,j+1,dp);
	pair<int,int>z=func(i+1,j+1,dp);

	int mx=INT_MIN;
	mx=max(x.first,max(y.first,z.first));

	int cnt=0; 

	if(mx==x.first)
	{
		cnt+=x.second;
	}
	if(mx==y.first)
	{
		cnt+=y.second;
	}
	if(mx==z.first)
	{
		cnt+=z.second;
	}

	return dp[i][j]={mx+(arr[i][j]-'0'),cnt};


}

void solve()
{

	cin>>n;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	arr[0][0]=arr[n-1][n-1]='0';

	vector<vector<pair<int,int>>>dp(n+4,vector<pair<int,int>>(n+4,{-1,-1}));

	pair<int,int>ans=func(0,0,dp);

	cout<<ans.first<<" "<<ans.second<<endl;


}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}





