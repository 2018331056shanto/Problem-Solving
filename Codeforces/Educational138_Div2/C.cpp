#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans=0;
	for(int k=1;k<=n;k++)
	{
		multiset<int>s(a.begin(),a.end());

		for(int i=0;i<n;i++)
		{
			auto it=s.upper_bound(k-i);
			if(it==s.begin())
				break;
			s.erase(--it);
			if(!s.empty())
			{
				int x=*s.begin();
				s.erase(s.begin());
				s.insert(x+k-i);
			}
		}
		if(s.size()+k==n)
			ans=k;
	}
	cout<<ans<<endl;
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
