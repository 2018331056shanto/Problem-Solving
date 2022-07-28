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
		std::vector<int> v;
		int need=n/2;
		int mn=1e7;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
			mn=min(mn,x);
		}
		sort(v.begin(),v.end());
		vector<pair<int,int>>ans;
		for(int i=0;i<n/2;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(v[j]%v[i]<mn)
				{
					ans.push_back({v[j],v[i]});
					need--;
				}
				if(need==0)
					break;
			}
			if(need==0)
				break;
		}
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i].first<<" "<<ans[i].second<<endl;
		}
		//cout<<"hello"<<endl;
	}	
	
}