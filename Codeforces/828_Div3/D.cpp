#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	int n;
	cin>>n;
	int cnt2=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		while(x%2==0)
		{
			x/=2;
			cnt2++;
		}
	}
	if(cnt2>=n)
	{
		cout<<0<<endl;
	}
	else{
		int temp=0;
		// int ans=0;

		
		int cnt=0;

		vector<int>v2;
		for(int i=1;i<=n;i++)
		{
			temp=i;
			cnt=0;
			while(temp%2==0)
			{
				cnt++;
				temp/=2;
			}
			v2.push_back(cnt);
		}
		sort(v2.begin(),v2.end(),greater<>());
		int ans=1;
		for(int i=0;i<v2.size();i++)
		{
			if(v2[i]+cnt2>=n)
			{
				cout<<ans<<endl;
				return;
			}
			cnt2+=v2[i];
			ans++;
		}
		
		cout<<-1<<endl;
	}
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
