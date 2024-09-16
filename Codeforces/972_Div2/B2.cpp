#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m,q; 
	cin>>n>>m>>q; 

	std::vector<int> v(m);

	for(int i=0;i<m;i++)
	{
		cin>>v[i];
	}

	sort(v.begin(),v.end());

	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x; 

		int right=upper_bound(v.begin(),v.end(),x)-v.begin(); 
		
		if(x>v[m-1])
		{
			cout<<n-v[m-1]<<endl;
		}
		else if(x<v[0])
		{
			cout<<v[0]-1<<endl;
		}
		else
		{
			cout<<(v[right]-v[right-1])/2<<endl;
		}

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
