#include<bits/stdc++.h>
using namespace std;


void solve(){
		
		int n,k;
		cin>>n>>k;
		vector<int>b(n);
		
		vector<pair<int,int>>a;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a.push_back({x,i});
		}	
		for (int i = 0; i < (n); ++i)
		{
			/* code */
			cin>>b[i];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());

		vector<int>c(n);
		for(int i=0;i<n;i++)
		{
			c[a[i].second]=b[i];
		}

		for(int i=0;i<n;i++)
		{
			cout<<c[i]<<" ";
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
