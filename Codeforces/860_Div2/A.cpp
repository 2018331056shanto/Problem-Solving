#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		if(a[i]<b[i])
		{
			swap(a[i],b[i]);
		}
	}

	for(auto x:a)
	{
		if(x>a[n-1])
		{
			cout<<"No"<<endl;
			return;
		}
	}
	for(auto x:b)
	{
		if(x>b[n-1])
		{
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
	


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
