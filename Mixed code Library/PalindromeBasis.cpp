	#include<bits/stdc++.h>
	using namespace std;
	std::vector<long long> v;
	const long long N=4*1e4+10;
	long long M=500;
	long long mod=1e9+7;
	long long dp[500][N];
	long long  createPalin(long long input,int isOdd)
	{
		string s=to_string(input);
		// cout<<s<<endl;
		if(s.size()<=3)
		{
			if(isOdd)
			{
				string k;
				k=s;
				reverse(k.begin(),k.end()-1);

				k.erase(k.size()-1);
				s.append(k);
				long long pal=stoi(s);
				// cout<<pal<<endl;
				return pal;
			}
			else
			{
				string k;
				k=s;
				reverse(k.begin(),k.end()-1);
				s.append(k);
				long long pal=stoi(s);
				// cout<<pal<<endl;
				return pal;
			}
		}
		return 0;

	}
	void genereatePal(long long n)
	{
		long long num=0;
		for(int i=0;i<2;i++)
		{
			long long j=1;
			while((num=createPalin(j,i%2))<=4*1e4)
			{
				v.push_back(num);
				j++;
			}
		}
		sort(v.begin(),v.end());
	}
	void get_ways()
	{
	//coin change problem number of ways to get a total with given coins
		for(int i=0;i<N;i++)
		{
			dp[0][i]=1;

		}
		for(int j=0;j<M;j++)
		{
			dp[j][0]=1;		
				
		}
		for(int i=1;i<=v.size();i++)
		{
			for(int j=1;j<N;j++)
			{
				if(v[i]>j)
				{
					dp[i][j]=dp[i-1][j]%mod;
				}
				else
				{
					dp[i][j]=(dp[i-1][j]+dp[i][j-v[i]])%mod;
				}
			}
		}
		
	}

	void solve()
	{
		
		int n;
		cin>>n;
		// cout<<dp[n]<<endl;
		// cout<<v.size();
	cout<<dp[v.size()][n]<<endl;
	}

	int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		genereatePal(1e5+5);
		get_ways();

		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}