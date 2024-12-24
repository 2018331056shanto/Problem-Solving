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

	 int cnt=0;
	int i,j;
	for(j=n-1;j>i;j--)
	{
		if(v[j]==0)
		{
			for(i=0;i<j;i++)
			{
				
			}
		}
	}
	// cout<<cnt<<endl;
	
	 cout<<cnt<<endl;
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
