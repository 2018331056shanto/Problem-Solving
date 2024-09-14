#include<bits/stdc++.h>
using namespace std;

void solve(){
	
	int n;
	cin>>n;
	vector<pair<int,int>>a,b,c;


	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back({x,i});
	}

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		b.push_back({x,i});
	}
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		c.push_back({x,i});
	}

	sort(a.begin(),a.end(),greater<>());
	sort(b.begin(),b.end(),greater<>());
	sort(c.begin(),c.end(),greater<>());

	int ans=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				int x=a[i].second,y=b[j].second,z=c[k].second;

				if(x!=y&&y!=z&&z!=x)
				{
					ans=max(ans,a[i].first+b[j].first+c[k].first);
				}
			}
		}
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
