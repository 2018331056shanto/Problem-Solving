#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	std::vector<string> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<4;j++)
		{
			if(v[i][j]=='#')
			{
				cout<<j+1<<" ";
			}
		}

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