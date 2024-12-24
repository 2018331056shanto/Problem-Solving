/*
https://www.youtube.com/watch?v=IFNibRVgFBo - Tushar Roy

Given n balloons, indexed from 0 to n-1. Each balloon is painted with a number on it represented by array nums. 
You are asked to burst all the balloons. If the you burst balloon i you will get nums[left] * nums[i] * nums[right] coins.
Here left and right are adjacent indices of i. After the burst, the left and right then becomes adjacent.

Find the maximum coins you can collect by bursting the balloons wisely.
Input: [3,1,5,8]
Output: 167 
*/

#include<iostream>
#include<utility>
#include <vector>
#include<climits>


using namespace std;


int func(int i,int j,vector<int>&v,vector<vector<int>>&dp)
{
	if(i>j)
	{
		return 0;
	}

	if(i==j)
		return v[i-1]*v[i]*v[i+1];

	if(dp[i][j]!=-1)
		return dp[i][j];

	int m=INT_MIN,tmp;

	for(int k=i;k<=j;k++)
	{
		tmp=v[i-1]*v[k]*v[j+1]+func(i,k-1,v,dp)+func(k+1,j,v,dp);
		m=max(m,tmp);
	}

	return dp[i][j]=m;
}

void solve()
{
	int n;
	cin>>n;

	vector<int>v(n+2);
	v[0]=v[n+1]=1;

	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}


	vector<vector<int>>dp(n+4,vector<int>(n+4,-1));

	int ans=func(1,n,v,dp);
	cout<<ans<<endl;

}

int main()
{
	solve();
}