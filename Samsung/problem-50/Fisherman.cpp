/*https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/fisherman/problem

There are N fishing spots and 3 gates. At each gate there are some fishermen waiting to reach the nearest unoccupied fishing spot. (Total no of fisherman <=N)

Distance between consecutive spots = distance between gate and nearest spot = 1 m

Only 1 gate can be opened(other gates after that gate) at a time and all fishermen of that gate must occupy the spots before the next gate is opened.

Distance is calculated as gate to nearest spot + nearest spot to closest vacant spot. Find the total sum of minimum distances need to walk for all the fishermen.

*/

#include<iostream>
#include <climits>
#include<utility>
#include<algorithm>
#include<vector>

using namespace std;

const int mx=1e5+9; 
const int MAX=1e8+9;


int func(int i,int j,int n,vector<pair<int,int>>&comb,vector<vector<int>>&dp)
{
	if(j>comb[0].second+comb[1].second+comb[2].second)
	{
		return MAX;
	}

	if(i==n)
	{
		if(j==comb[0].second+comb[1].second+comb[2].second)
		{
			return 0;
		}
		else
			return MAX;
	}

	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}


	int x=0,y=0,cost;


	if(j<comb[0].second)
	{
		cost=abs((i+1)-comb[0].first)+1;
	}
	else if(j<comb[0].second+comb[1].second)
	{
		cost=abs((i+1)-comb[1].first)+1;
	}
	else
	{
		cost=abs((i+1)-comb[2].first)+1;
	}

	x=func(i+1,j+1,n,comb,dp)+cost;
	y=func(i+1,j,n,comb,dp);

	return dp[i][j]=min(x,y);
}



void solve()
{
	int n; 
	cin>>n; 

	vector<int>gates(3),fishmen(3);

	for(int i=0;i<3;i++)
	{
		cin>>gates[i];
	}

	for(int i=0;i<3;i++)
	{
		cin>>fishmen[i];
	}


	vector<pair<int,int>>comb;

	for(int i=0;i<3;i++)
	{
		comb.push_back({gates[i],fishmen[i]});
	}

	vector<vector<int>>dp(n+10,vector<int>(n+10,-1));

	cout<<func(0,0,n,comb,dp)<<endl;
}

int main()
{
	solve();
}