#include<bits/stdc++.h>
using namespace std;

int vis[10002][100002];

void dfs(vector<string>&v,int i,int j,int n,int m){
	if(i<0||i>=n||j<0||j>=m||vis[i][j]==1)
	{
		return ;
	}

	vis[i][j]=1;
	dfs(v,i+1,j,n,m);
	dfs(v,i-1,j,n,m);
	dfs(v,i,j+1,n,m);
	dfs(v,i,j-1,n,m);
}

int main(){


	int n,m;
	cin>>n>>m;

	vector<string> v;


	for(int i=0;i<n;i++){

		string s;
		cin>>s;
		v.push_back(s);
	}

	int ans=0;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){

			if(v[i][j]=='.'&&vis[i][j]==0){
				dfs(v,i,j,n,m);
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}