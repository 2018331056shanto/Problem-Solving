	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		int n;
		cin>>n;
		int odd=0,even=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x%2)
			{
				++odd;
			}
			else
			{
				++even;
			}
		}
		if(even>odd)
		{
			cout<<odd<<endl;
		}
		else
		{
			cout<<even<<endl;
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