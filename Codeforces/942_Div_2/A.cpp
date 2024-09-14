#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 
	std::vector<int>a(n),b(n);

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}

	int flag=0; 

	int ans=0;
	while(flag!=1)
	{
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<=b[i])
			{
				cnt++;
			}
		}
		if(cnt==n)
			break;
		a.push_back(b[0]);
		ans++;

		sort(a.begin(),a.end());
		
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
