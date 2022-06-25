	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		int n;
		cin>>n;
		int current=0;
		int mx=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x!=0)
			{
				current++;
			}
			else
			{
				if(current)
					mx++;
				current=0;
			}

		}
		if(current)
			mx++;
		mx=min(mx,2);
		cout<<mx<<endl;

		

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