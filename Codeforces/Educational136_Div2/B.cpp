#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n),ans;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	ans.push_back(v[0]);
	for(int i=1;i<n;i++)
	{
		int x=ans[i-1]-v[i];
		// cout<<x<<endl;
		if(v[i]!=0&&x>=0)
		{
			cout<<-1<<endl;
			return;
			

		}
		else{
			ans.push_back(ans[i-1]+v[i]);
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
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
