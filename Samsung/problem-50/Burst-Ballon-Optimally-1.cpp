// /*
// There are n balloons and n bullets and each balloon is assigned with a particular number (point).
// Whenever a particular balloon is shot the no of points increases by

// 1.the multiplication of point assigned to balloon on left and that of right side.
// 2.point assigned to left if no right exists
// 3.point assigned to right if no left exists.
// 4.the point assigned to itself if no other balloon exists.
 
// You have to output the maximum no of points possible.
 

// Input
// 1 2 3 4
 
// Output
// 20

// /*
// 5
// 1 2 3 5 4



// */

// // 1

// // ans=2;

// // 			    1
// // 	 		   / \      vis[1,0,0,0]
// // 			  2 		vis[1,1,0,0]
// // 			 / \
// // 			3 			vis[1,1,1,0]
// // 		   / \          
// // 		  4				vis[1,1,1,1]

// // 		  				if(vis[start-1]==0&&vis[start+1]==0)
		  					
// // 		  					vis[start]=1
// // 		  					return v[start-1]*v[start+1]

// // 		  				if(vis[start-1]==1&&start==v.size())
// // 		  					return v[start]


// // 1+2+3+4=10

// // 3+4+4+1=12
// // 8+4+4+1=17


// #include<bits/stdc++.h>
// using namespace std;

// void backTrack(int start,vector<int>&v,vector<int>&vis,int sum)
// {
// 	if()
// }

// void solve(){
	
// 	int n;
// 	cin>>n;
// 	vector<int>v(n);

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>v[i];
// 	}
// 	vector<int>vis(n+1);

// 	backTrack(0,)



// }

// int32_t main()
// 	{
// 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// 		// int t;
// 		// cin>>t;
// 		// while(t--)
// 		{
// 			solve();
// 		}
// 	}



// // ballon(v,dp,x,y)
// // {
// // 	if(x>y)
// // 		return 0

// // 	if(x==y)
		

// // }

// // ballon(v,dp,1,n);

#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<climits>

using namespace std;


// long long func(vector<int>&v,vector<vector<int>>&dp,int i,int j)
// {
// 	if(i>j||j<i)
// 	{
// 		return 0;
// 	}
// 	if(i==j)
// 	{
// 		return v[i-1]*v[i+1];
// 	}

// 	if(dp[i][j]!=-1)
// 	{
// 		return dp[i][j];
// 	}

// 	int m=INT_MIN,tmp;

// 	for(int k=i;k<=j;k++)
// 	{
// 		if(i==1&&j==v.size()-2)
// 		{
// 			tmp=v[k]+func(v,dp,i,k-1)+func(v,dp,k+1,j);
// 		}
// 		else
// 		{
// 			tmp=v[i-1]*v[j+1]+func(v,dp,i,k-1)+func(v,dp,k+1,j);
// 		}
// 		m=max(tmp,m);
// 	}

// 	return dp[i][j]=m;

// }



int func(vector<int>&v,vector<vector<int>>&dp,int i,int j)
{

	if(i>j)
	{
		return 0;
	}

	if(i==j)
	{
		return v[i-1]*v[i+1];
	}

	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}

	int m=INT_MIN,tmp;

	for(int k=i;k<=j;k++)
	{
		
		if(i==1&&j==v.size()-2)
		{
			tmp=v[k]+func(v,dp,i,k-1)+func(v,dp,k+1,j);
		}
		else
		{
			tmp=v[i-1]*v[j+1]+func(v,dp,i,k-1)+func(v,dp,k+1,j);
		}
		m=max(tmp,m);
	}
	cout<<" dsa "<<i<<" "<<j<<" "<<m<<endl;
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

	cout<<func(v,dp,1,n)<<endl;



	// int n;
	// cin>>n;

	// vector<int>v(n+2,0);
	// v[0]=v[n+1]=1;

	// for(int i=1;i<=n;i++)
	// {
	// 	cin>>v[i];
	// }

	// vector<vector<int>>dp(n+4,vector<int>(n+4,-1));

	// int ans=func(v,dp,1,n);

	// cout<<ans<<endl;

}

int main()
{
	solve();
}

