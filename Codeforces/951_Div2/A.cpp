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

	int mn=INT_MAX; 

	bool flag=false;

	for(int i=0;i<n-1;i++)
	{
		
		if(mn>max(v[i],v[i+1]))
		{
			mn=max(v[i],v[i+1]);
		}
	}
	cout<<mn-1<<endl;
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
