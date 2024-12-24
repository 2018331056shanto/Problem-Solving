#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n;
	cin>>n; 
	std::vector<long long> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	string s;
	cin>>s; 


	vector<long long>presum(n+1);

	presum[0]=0;
	presum[1]=v[0];
	for(int i=2;i<=n;i++)
	{
		presum[i]=presum[i-1]+v[i-1];
		// cout<<presum[i]<<" ";
	}
	// for(auto x:presum)
	// {
	// 	cout<<x<<" ";
	// }


	int i=0;
	int j=n-1;
	long long ans=0;
	while(i<j)
	{
		if(s[i]=='L')
		{
			while(j>=0&&i<j)
			{
				if(s[j]=='R')
				{
					ans+=presum[j+1]-presum[i];
					j--;
					break;
				}
				j--;
			}
		}
		i++;
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
