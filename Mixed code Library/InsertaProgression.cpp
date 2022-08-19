	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n,x;
		cin>>n>>x;
		int mn=1e9;
		int mx=-1e9;
		std::vector<int> v(n);
		bool flag1=false;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]==1)
			{
				flag1=true;
			}
			mn=min(v[i],mn);
			mx=max(v[i],mx);
		}
		int dif=0;
		
		for(int i=0;i<n-1;i++)
		{
			dif+=abs(v[i+1]-v[i]);
		}
		if(n==1)
		{
			cout<<max(x,v[0])-1<<endl;
		}
		else
		{
			if(flag1)
			{
				if(mx>=x)
				{
					cout<<dif<<endl;
				}
				else
				{
					cout<<dif+(x-v[n-1])<<endl;
				}
			}
			else
			{
				vector<int>cp;
				for(int i=0;i<n-1;i++)
				{
					if(mn==v[i])
					{
						cp.push_back(v[i+1]);
					}
				}
				sort(cp.begin(),cp.end());
				
				
				if(mx>=x)
				{

					cout<<dif+(mn-1)+(cp[0]-1)-(cp[0]-mn)<<endl;
				}
				else
				{
					cout<<dif+(mn-1)+(cp[0]-1)+(x-v[n-1])-(cp[0]-mn)<<endl;
				}
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