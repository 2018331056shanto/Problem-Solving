#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	vector<int>diff;
	// int ans=1;
	for(int i=0;i<n;i++)
	{

		int dif=abs(v[i]-(i+1));


		diff.push_back(dif);
		// mp[dif]++;
	}

int ans=0;
	if(diff.size()==1)
	{
		cout<<diff[0]<<endl;
	}
	else
	{
		ans=diff[0];
		for(int i=1;i<n;i++)
		{
			ans=__gcd(ans,diff[i]);
			
		}
		cout<<ans<<endl;
	}


	// int ans=0;
	// int xx=-1;

	// for(int i=)



	// for(auto x:mp)
	// {
	// 	if(x.second>xx &&x.first!=0)
	// 	// {
	// 	// 	xx=x.second;
	// 	// 	ans=x.first;
	// 	// }
	// 		cout<<x.first<<" ";
	// 	// cout<<x.first<<" "<<x.second<<endl;
	// }
	// cout<<endl;
	// // cout<<ans<<endl;
	

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
