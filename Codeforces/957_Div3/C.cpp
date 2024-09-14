#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m,k;
	cin>>n>>m>>k; 

	std::vector<int> v(n);
	iota(v.begin(),v.end(),1);

	reverse(v.begin(),v.end());
	reverse(v.end()-m,v.end());

	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
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
