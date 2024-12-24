	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		vector<int>a,b;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a.push_back(x);
			b.push_back(x);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<>());
		
		cout<<(b[0]-a[0])+(b[1]-a[1])<<endl;
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