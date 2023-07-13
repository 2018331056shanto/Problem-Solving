#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	double n,k;
	cin>>n>>k;

	
	int x=1;

	int ans=0;
	while(x<=n)
	{
		x+=k;
		
		
		ans++;
	}

	// cout<<"x :"<<x<<endl;
	if(x-k!=n)
	{
		ans++;
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


