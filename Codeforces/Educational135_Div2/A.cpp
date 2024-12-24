	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		int idx=0;
		int mx=-1;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			int tempMx=mx;
			mx=max(mx,x);
			if(tempMx!=mx){

				idx=i;
			}

		}
		cout<<idx<<endl;
	
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