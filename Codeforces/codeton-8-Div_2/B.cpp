#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	std::vector<int> v(n);
	std::vector<int>ans(n),has(n+1);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}	

	int mex=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]>=0)
		{
			ans[i]=mex;
		}
		else
		{
			ans[i]=mex-v[i]; 
		}

		has[ans[i]]=true; 
		while(has[mex])
			mex++;
	}

	for(auto x:ans)
	{
		cout<<x<<" ";
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
