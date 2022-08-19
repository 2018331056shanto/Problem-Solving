	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n,q;
		cin>>n>>q;
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end(),greater<>());
		vector<int>psum;
		psum.push_back(v[0]);
		for(int i=1;i<n;i++)
		{
			int x=psum[i-1]+v[i];
			psum.push_back(x);
		}
		// for(auto x:psum)
		// 	cout<<x<<endl;
		for(int i=0;i<q;i++)
		{
			int x;
			cin>>x;
			int k=lower_bound(psum.begin(),psum.end(),x)-psum.begin();
			// cout<<"k "<<k<<endl;
			if(k==n)
			{
				cout<<-1<<endl;
			}
			else
			{
				cout<<k+1<<endl;
			}
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