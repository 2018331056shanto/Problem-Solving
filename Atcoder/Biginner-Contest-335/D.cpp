#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;

	int x=1;
	int i=0;
	int j=0;
	vector<vector<int>>vis(n+1,vector<int>(n+1,0));

	std::vector<vector<string>> v(n,vector<string>(n,""));
	while(x<=n*n)
	{

		while(j<n&&vis[i][j]!=1)
		{
			vis[i][j]=1;
			// cout<<"h"<<endl;
			string s=to_string(x);
			// cout<<"1"<<endl;
			v[i][j]=s;
			x++;
			j++;
		}

		--j;
		i++;

		while(i<n&&vis[i][j]!=1)
		{
			vis[i][j]=1;
			string s=to_string(x);
			// cout<<"2"<<endl;
			v[i][j]=s;
			x++;
			i++;
		}

		--i;
		--j;
		while(j>=0&&vis[i][j]!=1)
		{
			vis[i][j]=1;
			string s=to_string(x);
			v[i][j]=s;
			// cout<<"3"<<endl;
			x++;
			j--;
		}

		++j;
		--i;
		while(i>=0&&vis[i][j]!=1)
		{
			vis[i][j]=1;
			string s=to_string(x);
			v[i][j]=s;
			// cout<<"4"<<endl;
			x++;
			i--;
		}
		++i;
		++j;

	}

	int mid=(n+1)/2;
	v[mid-1][mid-1]="T";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
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
