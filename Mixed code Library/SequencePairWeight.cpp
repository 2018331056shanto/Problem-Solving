#include<bits/stdc++.h>
using namespace std;
map<long long,long long>mp;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long ans=0;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			ans+=mp[x]*(n-i+1);
			mp[x]+=i;

		}
		cout<<ans<<endl;
		mp.clear();
	}
}	