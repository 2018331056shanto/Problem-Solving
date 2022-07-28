#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[100000];
		std::vector<pair<int,int>> v;
		v.push_back({0,0});
		for(int i=0;i<n;i++)
		{
			int a,d;
			cin>>a>>d;
			v.push_back({a,d});

		}
		for(int i=1;i<=n;i++)
		{
			cin>>ar[i];
		}
		int ans=0;int bro=0;int x;
		for(int i=1;i<v.size();i++)
		{
			

			if((v[i].second-v[i].first)%2==0)
			{
				x=(v[i].second-v[i].first)/2;

			}
			else
			{
				x=(v[i].second-v[i].first)/2+1;
			}
			//cout<<v[i].first<<" "<<v[i-1].second<<" "<<" "<<v[i].second<<" "<<ar[i]<<" "<<x<<endl;
			
			bro=max(((v[i].first-v[i-1].second)+ar[i]+x+bro),v[i].second);
            ans=bro;
            
            //cout<<ans<<endl;

		}
		if(n==1)
		{
			cout<<v[1].first+ar[1]<<endl;
		}
		else
		{
			cout<<ans-x<<endl;
		}
		
	}
}	