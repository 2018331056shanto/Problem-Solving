#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}	

	sort(v.begin(),v.end(),greater<>());

	if(v[0]==0)
	{
		cout<<0<<endl;
		return;
	}

	int ans=n;

	int j=n;
	for(int i=0;i<n;i++)
	{
		int y=n-j;
		if(v[i]<=y)
		{
			// if(v[i-1]>y)
			{
					cout<<y<<endl;
			return;
			}
		
		}

		j--;
	}
	cout<<-1<<endl;

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