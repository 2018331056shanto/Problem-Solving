#include<bits/stdc++.h>
using namespace std;

 int dfs(vector<int>&v,int start,int &ans)
{
	if(start>=v.size())
	{
		return INT_MAX-10000;
	}
	if(start==v.size()-1)
	{
		return v[start];
	}

	


}



void solve(){
	
	int n;
	cin>>n; 

	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	vector<int>dp(n+1);
	int ans=0;
	
	dfs(v,0,ans);
	cout<<ans<<endl;
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
