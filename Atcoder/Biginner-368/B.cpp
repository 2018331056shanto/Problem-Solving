#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	std::vector<int> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}


	priority_queue<int>pq;
	for(int i=0;i<n;i++)
	{
		pq.push(v[i]);
	}

	int ans=0;
	while(pq.size()>1)
	{
		int x=pq.top();
		pq.pop();

		int y=pq.top();
		pq.pop();

		--x;
		--y;

		if(x!=0)
		{
			pq.push(x);
		}
		if(y!=0)
		{
			pq.push(y);

		}
		ans++;


	}

	cout<<ans<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
