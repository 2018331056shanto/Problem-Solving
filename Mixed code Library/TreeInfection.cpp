	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		std::vector<int> v(n+1);
		for(int i=0;i<n-1;i++)
		{
			int x;
			cin>>x;
			++v[x];
		}
		sort(v.begin(),v.end());
		reverse(v.begin(),v.end());
		int done=0;
		int increase=0;
		std::map<int, int> map;
		for(int i=0;i<n+1;i++)
		{
			increase-=map[i];
			done+=increase;
			if(done>=n)
			{
				cout<<i+1<<endl;
				return;
			}
			if(v[i])
			{
				increase++;
			}
			map[i+v[i]]++;
		}
		

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

