#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m;
	cin>>n>>m;


	vector<vector<int>>a(n,vector<int>(m)),b(n,vector<int>(m));

	map<map<int,int>,bool>row,col;
	for(int i=0;i<n;i++)
	{
		map<int,int>mp;
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			mp[a[i][j]]++;
			

		}
		row[mp]=true;
	}



	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>b[i][j];
		}
	}


	for(int i=0;i<m;i++)
	{
		map<int,int>mp;

		for(int j=0;j<n;j++)
		{
			mp[a[j][i]]++;
		}
		// sort(s.begin(),s.end());
		col[mp]=true;
	}


	for(int i=0;i<n;i++)
	{
		map<int,int>mp;

		for(int j=0;j<m;j++)
		{
			mp[b[i][j]]++;
		}

		// sort(s.begin(),s.end());

		if(row.find(mp)==row.end())
		{
			cout<<"NO"<<endl;
			return;
		}
	}

	for(int i=0;i<m;i++)
	{
		map<int,int>mp;
		for(int j=0;j<n;j++)
		{
			mp[b[j][i]]++;
		}
		// sort(s.begin(),s.end());

		if(col.find(mp)==col.end())
		{
			
			cout<<"NO"<<endl;
			return;
		}
	}

	cout<<"YES"<<endl;


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
