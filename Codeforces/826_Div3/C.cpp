#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	vector<long long>v(n);
	long long sum=0;
	long long ans=n;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		
	}
	for(int i=0;i<n-1;i++)
	{
		sum+=v[i];
		long long cur=i+1,sum2=0,thick=0;
		for(int j=i+1;j<n;j++)
		{
			sum2+=v[j];
			thick++;
			if(sum2==sum)
			{
				cur=max(cur,thick);
				sum2=0;
				thick=0;
			}
		}
		if(sum2==0)
			ans=min(cur,ans);

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
