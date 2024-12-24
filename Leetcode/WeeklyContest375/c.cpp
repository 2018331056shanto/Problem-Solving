#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k;
	cin>>n>>k;
	int cntK=0;
	

	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	int mxel=*max_element(v.begin(),v.end());

	int ans=0;
	int i=0,j=0;

	while(j<n)
	{
		if(v[j]==mxel)
		{
			cntK++;
			
		}

		while(cntK==k&&i<=j)
		{
			ans+=1+(n-1-j);
			if(v[i]==mxel)
			{
				cntK--;
			}

			i++;
		}
		j++;

	}
	cout<<ans<<endl;

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
