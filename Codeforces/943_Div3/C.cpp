#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	std::vector<int> v(n);

	for(int i=0;i<n-1;i++)
	{
		cin>>v[i];
	}
	
	vector<int>ans; 
	int x=v[0]+1; 
	ans.push_back(x);
	

	for(int i=0;i<n-1;i++)
	{
		if(v[i+1]<v[i])
		{
			ans.push_back(v[i]);
		}
		else
		{
			ans.push_back(ans.back()*(v[i+1]/v[i])+v[i]);
		}
	}

	for(auto c:ans)
		cout<<c<<" ";
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
