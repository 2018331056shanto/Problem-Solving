#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,q;
	cin>>n>>q;

	int x1=1,y1=0;

	std::vector<pair<int,int>> v;
	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;
		if(x==1)
		{
			
			char c;
			cin>>c;

			if(c=='U')
			{
				y1+=1;
			}
			if(c=='D')
			{
				y1-=1;
			}
			if(c=='R')
			{
				x1+=1;
			}
			if(c=='L')
			{
				x1-=1;
			}
			v.push_back({x1,y1});
		}
		else
		{
			int x;
			cin>>x;
			
			if(v.size()>=x)
			{
				cout<<v[v.size()-x].first<<" "<<v[v.size()-x].second<<endl;
			}
			else
			{
				cout<<x-v.size()<<" "<<0<<endl;
			}
		}


	}


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
