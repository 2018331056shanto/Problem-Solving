	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		int n;
		cin>>n;
		vector<int>v(n),v1(n),ans(n);
		for (int i = 0; i < n; ++i)

		{
			cin>>v[i];
			/* code */
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>v1[i];
			/* code */
		}
		for (int i = 0; i < n; ++i)
		{
			ans[i]=v1[i]-v[i];
			/* code */
		}
		sort(ans.begin(),ans.end());
		
		reverse(ans.begin(),ans.end());
		 int cnt=0,j=n-1;
		for(int i=0;i<n;i++){
			while(j>i && ans[j]+ans[i]<0) j--;
			if(j<=i)break;
			cnt++,j--;

		}

		cout<<cnt<<endl;

	
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