#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 
	std::vector<int> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	for(int i=0;i<n;i++)
	{
		cout<<(v[i]%n+1)<<" ";
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
