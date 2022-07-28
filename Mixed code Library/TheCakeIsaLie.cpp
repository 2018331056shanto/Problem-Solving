#include<bits/stdc++.h>
using namespace std;
int dp[102][102];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	int in=0;
	for(int i=2;i<101;i++)
	{
		in++;
		dp[1][i]=in;
		dp[i][1]=in;
	}
	
	for(int i=2;i<102;i++)
	{
		for(int j=2;j<102;j++)
		{
			dp[i][j]=dp[i][j-1]+i;
		}
		
	}
	// for(int i=1;i<10;i++)
	// {
	// 	for(int j=1;j<10;j++)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// cout<<dp[2][2]<<endl;

	cin>>t;
	while(t--)
	{
		int row,col,step;
		cin>>row>>col>>step;
		if(dp[row][col]==step)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}	