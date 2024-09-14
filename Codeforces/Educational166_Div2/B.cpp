#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 
	std::vector<int> a(n),b(n+1);

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=n;i++)
	{
		cin>>b[i];
	}
	long long ans=0;
	bool flag=false;
	int dif=INT_MAX;
	int take=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>=b[n]&&b[i]<=b[n])
		{
			flag=true;
		}
		if(a[i]<=b[n]&&b[i]>=b[n])
		{
			flag=true;
		}

		ans+=abs(a[i]-b[i]);

		int difa=abs(a[i]-b[n]);
		int difb=abs(b[i]-b[n]);

		int mn=min(difa,difb);

		if(mn==difa)
		{
			if(difa<dif)
			{
				take=a[i];
				dif=difa;
			}
		}
		else
		{
			if(difb<dif)
			{
				take=b[i];
				dif=difb;
			}
		}

	}

	if(flag)
	{
		ans++;
	}
	else
	{
		ans+=abs(take-b[n])+1;
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
