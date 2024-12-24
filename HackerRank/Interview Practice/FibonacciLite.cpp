#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	if(n==0)
	{
		cout<<0<<endl;
		return ;
	}
	std::vector<int> v(n);
	v[0]=v[1]=1;

	for(int i=2;i<=n;i++)
	{
		v[i]=v[i-1]+v[i-2];
	}

	cout<<v[n-1]<<endl;


}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
