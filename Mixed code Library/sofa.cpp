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
		std::vector<pair<long long int,long long int>>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back({x,i});
		}

		sort(v.begin(), v.end());
		long long int ans=0;
		reverse(v.begin(),v.end());
		long long int increase=1;
		long long int cnt=0;
		for(int i=0;i<n;i++)
		{
			cnt++;
			ans+=increase*2*v[i].first;
			if(cnt==2)
			{
				increase++;
				cnt=0;
			}
		}
		cout<<ans<<endl;
		long long int ar[200020];
		long long int val=1;
		cout<<0<<" ";
		for(int i=0;i<n;i+=2)
		{
			ar[v[i].second]=val;
			//cout<<v[i].first<<" "<<v[i].second<<" "<<val<<endl;
			//cout<<ar[v[i].second]<<" ";
			if(i+1==n)
				break;
			ar[v[i+1].second]=-1ll*val;
			//cout<<v[i+1].first<<" "<<v[i+1].second<<" "<<-1*val<<endl;
			//cout<<ar[v[i+1].second]<<" ";
			val++;
		}
		//cout<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<ar[i]<<" ";
		}
		cout<<endl;
			
	}	
	
}