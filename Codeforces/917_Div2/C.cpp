#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k,d;
	cin>>n>>k>>d;
	std::vector<int> a(n),b(k);

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	

	for(int i=0;i<k;i++)
	{
		cin>>b[i];
	}


	int operation=min(2*n,d-1);


	int ans=0;
	for(int i=0;i<=operation;i++)
	{
		
		int cnt=0;

		for(int j=0;j<n;j++)
		{
			cnt+=(j+1==a[j]);
		}

		ans=max(ans,cnt+(d-(i+1))/2);


		for(int j=0;j<b[i%k];j++)
		{
			a[j]++;
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
