	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		vector<int>v;
		for(int i=1;i<n;i++)
		{
			v.push_back(i+1);
		}
		v.push_back(1);
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	
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