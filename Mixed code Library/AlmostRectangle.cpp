#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<pair<int,int>> v;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				char c;
				cin>>c;
				if(c=='*')
				{
					v.push_back({i,j});

				}
			}
		}
		if(v[0].first==v[1].first)
		{
            if(v[0].first!=n)
            {
            	v.push_back({v[0].first+1,v[0].second});
			    v.push_back({v[1].first+1,v[1].second});
            }
            if(v[0].first!=1)
            {
            	v.push_back({v[0].first-1,v[0].second});
			    v.push_back({v[1].first-1,v[1].second});
            }
			
		}
		else if(v[0].second==v[1].second)
		{
			if(v[0].second!=n)
            {
            	v.push_back({v[0].first,v[0].second+1});
			    v.push_back({v[1].first,v[1].second+1});
            }
            if(v[0].second!=1)
            {
            	v.push_back({v[0].first,v[0].second-1});
			    v.push_back({v[1].first,v[1].second-1});
            }

		}
		else
		{
			v.push_back({v[0].first,v[1].second});
			v.push_back({v[1].first,v[0].second});

		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==v[0].first&&j==v[0].second||i==v[1].first&&j==v[1].second||i==v[2].first&&j==v[2].second||i==v[3].first&&j==v[3].second)
				{
					cout<<"*";
				}
				else
				{
					cout<<".";
				}
			}
			cout<<endl;
		}
		
	}
}	