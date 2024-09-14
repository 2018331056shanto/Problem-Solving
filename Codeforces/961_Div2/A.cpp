#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k;
	cin>>n>>k; 

	std::vector<int> v;
	
	v.push_back(n);

	for(int i=n-1;i>=1;i--)
	{
		
		v.push_back(i);
		v.push_back(i);

	}

	int i=0; 

	int ans=0;
	while(k>0&&i<v.size())
	{
		ans++;
		k-=v[i];

		// cout<<"k : "<<k<<endl;
		i++;
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
