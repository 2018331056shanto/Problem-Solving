#include<bits/stdc++.h>
using namespace std;
int dp[200][200];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;int tt=1;
	while(t--)
	{
		
		for(int i=0;i<200;i++)
		{
			for(int j=0;j<200;j++)
			{
				dp[i][j]=0;
			}
		}
		cout<<"Case "<<tt<<": ";
		tt++;
		int n;
		cin>>n;
		std::vector<int> v[200];
				//cout<<dp[3][3]<<endl;
		 int mx;
	    for(int i=0;i<2*n-1;i++)
	    {
	    	if(i<n)
	    	{
	    		for(int j=0;j<i+1;j++)
	    	{
	    		//cout<<"xx"<<endl;
	    		
				int x;
	    		cin>>x;
	    		v[i].push_back(x);
	    		//cout<<x<<" ";
	    		
	    		

	    	}
	    	//cout<<endl;
	    	}
	    	else
	    	{

	    		for(int j=2*n-1-i;j>0;j--)
	    	{
	    		//cout<<"yyy"<<endl;
	    		int x;
	    		cin>>x;
	    		v[i].push_back(x);
	    		//cout<<x<<" ";
	    	}
	    	//cout<<endl;
	    	}
	    	
	    }
	    mx=dp[0][0]=v[0][0];
	    
	    
	    	for(int i=1;i<2*n-1;i++)
	    {
	    	if(i<n)
	    	{
	    		for(int j=0;j<i+1;j++)
	    	{
	    		if(j==0)
	    		{
	    			//cout<<"first "<<dp[i-1][j]<<endl;
	    			dp[i][j]=v[i][j]+dp[i-1][j];
	    			//cout<<"first "<<dp[i][j]<<endl;
	    			mx=max(mx,dp[i][j]);
	    		}
	    		else if(j==v[i].size()-1)
	    		{
	    			dp[i][j]=v[i][j]+dp[i-1][j-1];
	    			//cout<<"hell "<<dp[i-1][j-1]<<endl;
	    			//cout<<"last "<<dp[i][j]<<endl;
	    			mx=max(mx,dp[i][j]);
	    		}
	    		else
	    		{
	    			dp[i][j]=max(dp[i-1][j-1]+v[i][j],dp[i-1][j]+v[i][j]);
	    			//cout<<"mid "<<dp[i-1][j-1]<<"end "<<dp[i-1][j]<<endl;
	    			//cout<<"mid "<<dp[i][j]<<endl;
	    			mx=max(mx,dp[i][j]);
	    		}
	    		
	    	}
	  		}
	  		else
	  		{
	  			//cout<<mx<<endl;
	  			//cout<<"I "<<i<<endl;

	  				for(int j=2*n-2-i;j>=0;j--)
	    	{

	    		dp[i][j]=max(dp[i-1][j]+v[i][j],dp[i-1][j+1]+v[i][j]);
	    		mx=max(mx,dp[i][j]);
	    		//cout<<"lower "<<dp[i][j]<<endl;
	    		
	    	}
	  		}
	  	}
	    	
	    
	    cout<<mx<<endl;
	    // cout<<dp[0][0]<<endl;

	    // for(int i=0;i<2*n-1;i++)
	    // {
	    // 	for(int k=0;k<v[i].size();k++)
	    // 	{
	    // 		cout<<v[i][k]<<" ";
	    // 	}
	    // 	cout<<endl;
	    	
	    // }	
	}
}	