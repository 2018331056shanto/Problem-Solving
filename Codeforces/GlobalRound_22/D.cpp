#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	vector<int>v(n+1);
	int k=0;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
		if(v[i]>i)
			k=i;
	}

	vector<vector<int>>v1(n+2);

	for (int i = 1; i <=n; ++i)
	{
		v1[v[i]].push_back(i);
		/* code */
	}
	// for(auto x:v1)
	// {
	// 	for(auto y:x)
	// 	{
	// 		cout<<y<<" ";
	// 	}
	// 	cout<<endl;
	// }
	int root=v1[0].size()?0:n+1;
	vector<int>q={root};
	for(int i=0;i<q.size();i++)
	{
		int f=q[i];

		
		sort(v1[f].begin(),v1[f].end(),[&](int a,int b){
			return v1[a].size() <v1[b].size();
		});
		for(auto y:v1[f])
		{
			q.push_back(y);
		}

	}
	printf("%d\n", k);
	for (int i = 1; i < (int)q.size(); ++i)
	{
		if (i > 1) printf(" ");
		printf("%d", q[i]);
	}
	puts(" ");
	

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
