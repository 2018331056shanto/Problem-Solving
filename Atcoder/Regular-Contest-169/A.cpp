#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n+1),p(n+1,0),depth(n+1,0),lim(n+1,0);

	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}	
	for(int i=2;i<=n;i++)
	{
		cin>>p[i];
	}

	for(int i=2;i<=n;i++)
	{
		depth[i]=depth[p[i]]+1;
	}

	for(auto x:depth)
	{
		cout<<x<<" ";
	}
	cout<<endl;

	for(int i=1;i<=n;i++)
	{
		lim[depth[i]]+=v[i];
	}

	// for(auto x:lim)
	// {
	// 	cout<<x<<" ";
	// }
	cout<<endl;
	int z = n + 2;
	while(z > 0 && lim[z] == 0) z--;
	int x = lim[z];
	if (x > 0) {
		printf("+\n");
	} else if (x < 0) {
		printf("-\n");
	} else {
		printf("0\n");
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
