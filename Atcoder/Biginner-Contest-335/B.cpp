#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			for(int k=0;k<=n;k++)
			{
				if(i+j+k<=n)
				{
					cout<<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
