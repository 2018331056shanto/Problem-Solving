#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n,m;
	cin>>n>>m;
	long long k=0;
	vector<pair<int,int>>cntOfSmallest;
	for(int i=0;i<n;i++)
	{
		

		int l;
		cin>>l;
		set<int>st;

		for(int j=0;j<l;j++)
		{
			int y;
			cin>>y;
			st.insert(y);
		}

		std::vector<int>b;

		long long  missing=0; 

		while(b.size()<2)
		{
			if(!st.count(missing))
			{
				b.push_back(missing);
			}
			missing++;
		}
		cntOfSmallest.push_back({b[0],b[1]});
		k=max(k,(long long)b[1]);
	}

	long long int ans=0; 


	if(k<m)
	{
		ans+=(m*(m+1)/2);
		ans-=k*(k+1)/2;
		m=k; 
	}

	vector<int>dp(k+1);

	vector<vector<int>>graph(k+1);

	vector<int>missingCnt(k+1);

	for(auto x:cntOfSmallest)
	{
		missingCnt[x.first]++;
	}

	for(auto x:cntOfSmallest)
	{
		graph[x.first].push_back(x.second);
	}

	for(int i=0;i<k;i++)
	{
		if(missingCnt[i]>=2)
		{
			for(int j=0;j<i;j++)
			{
				graph[j].push_back(i);
			}
		}
	}

	for(int i=k;i>=0;i--)
	{
		long long int maxReachable=dp[i];

		maxReachable=max(maxReachable,(long long)i);
		dp[i]=maxReachable;
		for(auto x:graph[i])
		{
			maxReachable=max(maxReachable,(long long)dp[x]);
			dp[i]=maxReachable;
		}
	}

	long long maxFromSmallest=0;

	for(auto x:cntOfSmallest)
	{
		maxFromSmallest=max(maxFromSmallest,(long long)x.first);

		if(missingCnt[x.first]>=2)
		{
			maxFromSmallest=max(maxFromSmallest,(long long)dp[x.first]);
		}
	}

	for(auto &x:dp)
	{
		x=max((long long)x,maxFromSmallest);
	}
	for(long long i=0;i<=m;i++)
	{
		ans+=dp[i];
	}
	cout<<ans<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
